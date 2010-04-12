#include "buffer.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <errno.h>

void std2_buffer_reserve(buffer* buf, int n)
{
    int max = buf->size + n;

    if (max < buf->max)
        return;

    max = (max + 63) & ~63;

    void* ptr = realloc(buf->data, max);
    if (!ptr)
    {
        fprintf(stderr, "std2: malloc of %d bytes failed\n", max);
        abort();
    }

    buf->max = max;
    buf->data = ptr;
}

void std2_buffer_free(buffer* b)
{
    free(b->data);
    memset(b, 0, sizeof(*b));
}

void std2_buffer_append_data(buffer* b, const void* p, int n)
{
    buffer_reserve(b, n);
    assert(b->size+n <= b->max);
    memcpy((char*)b->data + b->size, p, n);
    b->size += n;
}

void std2_buffer_append_alignment(buffer* b, int align)
{
    assert(align == 4 || align == 8);
    int n = (b->size + align - 1) & ~(align - 1);
    buffer_reserve(b, align);
    while (b->size < n)
        *((char*)b->data + b->size++) = 0;
}

void std2_buffer_append_32(buffer* b, std2_int32 v)
{
    buffer_reserve(b, 4);
    assert(b->size+4 <= b->max);
    memcpy((char*)b->data + b->size, &v, 4);
    b->size += 4;
}

void std2_buffer_append_64(buffer* b, std2_int64 v)
{
    buffer_reserve(b, 8);
    assert(b->size+8 <= b->max);
    memcpy((char*)b->data + b->size, &v, 8);
    b->size += 8;
}

std2_int32 std2_buffer_read_32(buffer* b)
{
    std2_int32 v;
    assert(b->pos + 4 <= b->size);
    memcpy(&v, (char*)b->data + b->pos, 4);
    b->pos += 4;
    return v;
}

int std2_buffer_avail(buffer* b)
{
    return b->size - b->pos;
}

void std2_buffer_compact(buffer* b)
{
    assert(b->pos <= b->size);
    memmove(b->data, (char*)b->data + b->pos, b->size - b->pos);
    b->size -= b->pos;
    b->pos = 0;
}

void* std2_buffer_cursor(buffer* b)
{
    assert(b->pos >= 0 && b->pos <= b->size);
    return (char*)b->data + b->pos;
}

int std2_write_buffer(int fd, buffer* buf)
{
    int r = write(fd, (char*)buf->data + buf->pos, buf->size - buf->pos);
    if (r < 0)
    {
        fprintf(stderr, "std2: wtf, error %s\n", strerror(errno));
        abort();
    }
    buf->pos += r;
    return r;
}

int std2_read_buffer_append(int fd, buffer* buf, int at_least)
{
    buffer_reserve(buf, at_least);
    while (buffer_avail(buf) < at_least)
    {
        int ret = read(fd, (char*)buf->data + buf->size, buf->max - buf->size);
        if (ret < 0)
        {
            fprintf(stderr, "std2: child recv error %s\n", strerror(errno));
            abort();
        }
        if (ret == 0)
            return 1;

        buf->size += ret;
    }
    return 0;
}
