#include <std2.h>
#include <std2priv.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include "fork.h"

static int current_fork_id;

static int         fork_count;
static fork_state* forks;

static void yield_callbacks(int fork_id);

static void return_func(int id, void* ret, void* arg0, void* arg1)
{
    (void)arg0;

    request* req = arg1;
    fork_state* fs = get_fork(req->fork_id);

    int ret_id   = buffer_read_32(&fs->in_buffer);
    int ret_size = buffer_read_32(&fs->in_buffer);
    buffer_compact(&fs->in_buffer);

    assert(req->id == ret_id);
    assert(req->return_id == id);

    char* p      = buffer_cursor(&fs->in_buffer);
    char* start = p;

    switch (req->ret_type.type)
    {
    case STD2_VOID:
        break;

    case STD2_INT32:
        *(std2_int32*)ret = *(std2_int32*)p;
        p += 4;
        break;

    case STD2_C_STRING:
        {
            int size = *(int*)p;
            p += 4;
            *(const char**)ret = p;
            p += size;
        }
        break;

    case STD2_INSTANCE:
        *(void**)ret = *(void**)p;
        p += sizeof(void*);
        break;

    default:
        fprintf(stderr, "std2: todo return type %d\n", req->ret_type.type);
        abort();
    }

    assert(p - start == ret_size);

    fs->in_buffer.pos += ret_size;

    fs->return_processed = 1;

    request** prev = &fs->first_request;
    while (*prev != req && *prev)
        prev = &(*prev)->next;
    assert(*prev);
    *prev = (*prev)->next;
    free(req);
}

static void read_cb(int fd, int mask, void* user)
{
    int fork_id = (int)user;
    fork_state* fs = get_fork(fork_id);
    assert(fd == fs->to_host_fd[0]);

    fs->has_yielded_reader = 0;

    if (mask & STD2_CALLBACK_ABORT)
    {
        assert(!"abort not implemented");
        abort();
        return;
    }

    buffer_reserve(&fs->in_buffer, 1024);
    int closed = read_buffer_append(fd, &fs->in_buffer, 1);

    /* If fd was closed, abort all returns. */

    if (closed)
    {
        request* req;
        for (req = fs->first_request; req; req = req->next)
            std2_abort_return(req->return_id);
        return;
    }

    /* fd wasn't closed so yield new read callback. */
    yield_callbacks(fork_id);

    if (!fs->return_processed)
        return;

    fprintf(stderr, "NAH\n");

    if (buffer_avail(&fs->in_buffer) < 8)
        return;

    int ret_id   = *(std2_int32*)buffer_cursor(&fs->in_buffer);
    int ret_size = *((std2_int32*)buffer_cursor(&fs->in_buffer) + 1);

    if (buffer_avail(&fs->in_buffer) < 8 + ret_size)
        return;

    fprintf(stderr, "std2: got return from fork, id %d, size %d\n", ret_id, ret_size);
    request* req;
    for (req = fs->first_request; req; req = req->next)
        if (req->id == ret_id)
        {
            fs->return_processed = 0;
            std2_continue_return(req->return_id, return_func, req);
            return;
        }

    fprintf(stderr, "std2: bad request id\n");
}

static void write_cb(int fd, int mask, void* user)
{
    int fork_id = (int)user;
    fork_state* fs = get_fork(fork_id);

    fs->has_yielded_writer = 0;

    if (mask & STD2_CALLBACK_ABORT)
    {
        assert(!"abort not implemented");
        abort();
        return;
    }

    int r = write_buffer(fd, &fs->out_buffer);
    if (r < 0)
    {
        // TODO: abort requests and stuff
        fprintf(stderr, "std2: write error: %s\n", strerror(errno));
        abort();
    }

    buffer_compact(&fs->out_buffer);

    yield_callbacks(fork_id);
}

static void yield_callbacks(int fork_id)
{
    fork_state* fs = get_fork(fork_id);

    if (!fs->has_yielded_reader)
    {
        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_READ | STD2_CALLBACK_ERROR | STD2_CALLBACK_ABORT;
        cb.fd    = fs->to_host_fd[0];
        cb.user  = (void*)fork_id;
        cb.func  = read_cb;
        std2_yield_callback(&cb);

        fs->has_yielded_reader = 1;
    }

    if (!fs->has_yielded_writer && fs->out_buffer.pos < fs->out_buffer.size)
    {
        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_WRITE | STD2_CALLBACK_ABORT;
        cb.fd    = fs->to_client_fd[1];
        cb.user  = (void*)fork_id;
        cb.func  = write_cb;
        std2_yield_callback(&cb);

        fs->has_yielded_writer = 1;
    }
}

request* std2_new_request(int fork_id, int mod, int func)
{
    fork_state* fs = get_fork(fork_id);

    /* Make request and add it to list. */

    request* req = malloc(sizeof(request));
    memset(req, 0, sizeof(request));

    req->fork_id = fork_id;
    req->id = fs->next_id++;
    req->next = fs->first_request;
    fs->first_request = req;

    /* Output request header. */

    buffer_append_32(&fs->out_buffer, 'c');
    buffer_append_32(&fs->out_buffer, req->id);
    buffer_append_32(&fs->out_buffer, mod);
    buffer_append_32(&fs->out_buffer, func);

    yield_callbacks(fork_id);

    return req;
}

void std2_new_unrefer_request(int fork_id, int mod, int clas, void* ptr)
{
    fork_state* fs = get_fork(fork_id);

    buffer_append_32(&fs->out_buffer, 'u');
    buffer_append_32(&fs->out_buffer, 0);
    buffer_append_32(&fs->out_buffer, mod);
    buffer_append_32(&fs->out_buffer, clas);
    buffer_append_data(&fs->out_buffer, &ptr, sizeof(void*));

    yield_callbacks(fork_id);
}

fork_state* std2_get_fork(int id)
{
    assert(id > 0 && id <= fork_count);
    return &forks[id-1];
}

int std2_fork()
{
    // TODO: reuse fork ids

    fork_count++;
    forks = realloc(forks, sizeof(fork_state) * fork_count);

    fork_state* fs = &forks[fork_count-1];
    memset(fs, 0, sizeof(fork_state));

    fs->return_processed = 1;

    if (pipe(fs->to_client_fd) < 0)
    {
        // TODO:
        abort();
    }

    if (pipe(fs->to_host_fd) < 0)
    {
        // TODO:
        abort();
    }

    int pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "std2: fork() failed\n");
        abort();
    }

    if (pid != 0)
    {
        fs->fork_pid = pid;
        close(fs->to_client_fd[0]);
        close(fs->to_host_fd[1]);
    }
    else
    {
        // Child.

        current_fork_id = fork_count;

        close(fs->to_client_fd[1]);
        close(fs->to_host_fd[0]);

        while (1)
            std2_process_request();
    }

    return fork_count;
}

void std2_unfork(int f)
{
    assert(f);
    fork_state* fs = &forks[f-1];

    fprintf(stderr, "FORK CLOSED %d\n", f);

    close(fs->to_client_fd[1]);
    close(fs->to_host_fd[0]);

    buffer_free(&fs->in_buffer);
    buffer_free(&fs->out_buffer);
}

int std2_current_fork_fd()
{
    assert(current_fork_id > 0);
    fork_state* fs = &forks[current_fork_id-1];
    return fs->to_client_fd[0];
}

void std2_process_request()
{
    fork_state* fs = get_fork(current_fork_id);

    if (read_buffer_append(fs->to_client_fd[0], &fs->in_buffer, 20))
    {
        fprintf(stderr, "std2: child got disconnection\n");
        exit(1);
    }

    int marker = buffer_read_32(&fs->in_buffer);
    int req_id = buffer_read_32(&fs->in_buffer);

    if (marker == 'c')
    {
        int m = buffer_read_32(&fs->in_buffer);
        int f = buffer_read_32(&fs->in_buffer);
        int params_size = buffer_read_32(&fs->in_buffer);

        read_buffer_append(fs->to_client_fd[0], &fs->in_buffer, params_size);

        fprintf(stderr, "call id=%d, %d, %d, %d\n", req_id, m, f, params_size);

        // Construct parameters.

        void* start_ptr = buffer_cursor(&fs->in_buffer);
        void* end_ptr = (char*)buffer_cursor(&fs->in_buffer) + params_size;
        void* p = start_ptr;

        void* args[16];

        int param_count = std2_get_param_count(m, f);
        int i;
        for (i = 0; i < param_count; i++)
        {
            struct std2_param t = std2_get_param_type(m, f, i);
            switch (t.type)
            {
                case STD2_INT32:
                    args[i] = p;
                    p = (char*)p + 4;
                    break;

                case STD2_C_STRING:
                    {
                        int size = *(int*)p;
                        p = (char*)p + 4;
                        args[i] = p;
                        p = (char*)p + size;
                    }
                    break;

                case STD2_INSTANCE:
                    args[i] = *(void**)p;
                    p = (char*)p + sizeof(void*);
                    break;

                default:
                    fprintf(stderr, "std2: (c) unknown type %d\n", t.type);
                    abort();
            }

            assert(p <= end_ptr);
        }

        fs->in_buffer.pos += (char*)p - (char*)start_ptr;

        // Do the call.

        struct std2_param ret_type = std2_get_return_type(m, f);

        buffer_append_32(&fs->out_buffer, req_id); // size will be filled afterwards

        int size_pos = fs->out_buffer.size;
        buffer_append_32(&fs->out_buffer, 0); // size will be filled afterwards

        int ret;

        switch (ret_type.type)
        {
            case STD2_VOID:
                ret = std2_call(0, m, f, 0, args);
                break;

            case STD2_INT32:
                {
                    std2_int32 v;
                    ret = std2_call(0, m, f, &v, args);
                    if (!ret)
                        buffer_append_32(&fs->out_buffer, v);
                }
                break;

            case STD2_C_STRING:
                {
                    const char* v;
                    ret = std2_call(0, m, f, &v, args);
                    if (!ret)
                    {
                        int l = strlen(v) + 1;
                        int n = (l + 3) & ~3;
                        buffer_append_32(&fs->out_buffer, n);
                        buffer_append_data(&fs->out_buffer, v, l);
                        buffer_append_alignment(&fs->out_buffer, 4);
                    }
                }
                break;

            case STD2_INSTANCE:
                {
                    void* v;
                    ret = std2_call(0, m, f, &v, args);
                    if (!ret)
                        buffer_append_data(&fs->out_buffer, &v, sizeof(void*));
                }
                break;

            default:
                fprintf(stderr, "std2: (a) unknown type %d\n", ret_type.type);
                abort();
        }

        if (ret)
        {
            fprintf(stderr, "delayed return\n");
            fs->out_buffer.size -= 8; // req_id and size
            return;
        }

        *(int*)((char*)fs->out_buffer.data + size_pos) =
            fs->out_buffer.size - size_pos - 4;

        while (buffer_avail(&fs->out_buffer))
            write_buffer(fs->to_host_fd[1], &fs->out_buffer);

        fprintf(stderr, "response written\n");

        buffer_compact(&fs->in_buffer);
        buffer_compact(&fs->out_buffer);
    }
    else if (marker == 'u')
    {
        assert(!"todo unrefer");
    }
    else
    {
        fprintf(stderr, "std2: protocol error, bad marker %d\n", marker);
        abort();
    }
}
