#include "std2priv.h"
#include <sys/inotify.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

struct inotify
{
    int fd;
    int return_id;
    char buf[1024];
    int buf_used;
};

static void free_inotify(void* ptr)
{
    // TODO: what if we are inside a callback?
    close(((struct inotify*)ptr)->fd);
    free(ptr);
}

static void free_event(void* ptr)
{
    free(ptr);
}

static void wrap_inotify(void* ret, void* const * args)
{
    (void)args;

    int fd = inotify_init();
    if (fd < 0)
    {
        *(void**)ret = 0;
        return;
    }

    struct inotify* p = malloc(sizeof(struct inotify));
    memset(p, 0, sizeof(struct inotify));

    *(void**)ret = p;
    p->fd = fd;
    p->return_id = 0;
}

static void wrap_add_watch(void* ret, void* const * args)
{
    (void)ret;
    struct inotify* p = args[0];

    *(int*)ret = inotify_add_watch(p->fd, args[1], *(int*)args[2]);
}

static void wrap_rm_watch(void* ret, void* const * args)
{
    struct inotify* p = args[0];
    *(int*)ret = inotify_rm_watch(p->fd, *(int*)args[1]);
}

static struct inotify_event* parse_event(struct inotify* p)
{
    struct inotify_event ev;
    if (p->buf_used < (int)sizeof(ev))
        return 0;

    memcpy(&ev, p->buf, sizeof(ev));

    int s = sizeof(ev) + ev.len;
    if (p->buf_used < s)
        return 0;

    struct inotify_event* ev2 = malloc(s+1);
    memcpy(ev2, p->buf, s);
    ev2->name[ev2->len] = '\0';

    p->buf_used -= s;
    memmove(p->buf, p->buf + s, p->buf_used);

    return ev2;
}

static void read_cb(int fd, int mask, void* user)
{
    struct inotify* p = user;

    assert(mask & STD2_CALLBACK_READ);

    int n = read(fd, p->buf + p->buf_used, sizeof(p->buf) - p->buf_used);
    if (n < 0)
    {
        std2_continue_return(p->return_id, 0, 0);
        p->return_id = 0;
        return;
    }
    p->buf_used += n;

    struct inotify_event* ev = parse_event(p);
    if (ev)
    {
        std2_continue_return(p->return_id, 0, ev);
        p->return_id = 0;
    }
    else
    {
        /* Didn't got a full event so wait for more data. */
        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_READ;
        cb.fd = p->fd;
        cb.user = p;
        cb.func = read_cb;
        std2_yield_callback(&cb);
    }
}

static void read_continue(int id, void* ret, void* arg0, void* arg1)
{
    *(void**)ret = arg1;
}

static void wrap_read(void* ret, void* const * args)
{
    struct inotify* p = args[0];

    /* Only one read is allowed at a time. */

    if (p->return_id)
    {
        *(void**)ret = 0;
        return;
    }

    /* If there is already an event in buffer, just return it. */

    struct inotify_event* ev = parse_event(p);
    if (ev)
    {
        *(void**)ret = ev;
        return;
    }

    /* Yield read callback and delay return. */

    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ;
    cb.fd = p->fd;
    cb.user = p;
    cb.func = read_cb;
    std2_yield_callback(&cb);

    p->return_id = std2_delay_return(read_continue, p);
}

static void wrap_event_wd(void* ret, void* const* args)
{
    struct inotify_event* ev = args[0];
    *(int*)ret = ev->wd;
}

static void wrap_event_mask(void* ret, void* const* args)
{
    struct inotify_event* ev = args[0];
    *(int*)ret = ev->mask;
}

static void wrap_event_cookie(void* ret, void* const* args)
{
    struct inotify_event* ev = args[0];
    *(int*)ret = ev->cookie;
}

static void wrap_event_name(void* ret, void* const* args)
{
    struct inotify_event* ev = args[0];
    *(const char**)ret = ev->name;
}

STD2_BEGIN_CLASS_LIST(inotify)
    STD2_CLASS("inotify", free_inotify)
    STD2_CLASS("event",   free_event)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(inotify)
    STD2_CONST("ACCESS", INT, IN_ACCESS)
    STD2_CONST("MODIFY", INT, IN_MODIFY)
    STD2_CONST("ATTRIB", INT, IN_ATTRIB)
    STD2_CONST("CLOSE_WRITE", INT, IN_CLOSE_WRITE)
    STD2_CONST("CLOSE_NOWRITE", INT, IN_CLOSE_NOWRITE)
    STD2_CONST("CLOSE", INT, IN_CLOSE)
    STD2_CONST("OPEN", INT, IN_OPEN)
    STD2_CONST("MOVED_FROM", INT, IN_MOVED_FROM)
    STD2_CONST("MOVED_TO", INT, IN_MOVED_TO)
    STD2_CONST("MOVE", INT, IN_MOVE)
    STD2_CONST("CREATE", INT, IN_CREATE)
    STD2_CONST("DELETE", INT, IN_DELETE)
    STD2_CONST("DELETE_SELF", INT, IN_DELETE_SELF)
    STD2_CONST("MOVE_SELF", INT, IN_MOVE_SELF)
    STD2_CONST("UNMOUNT", INT, IN_UNMOUNT)
    STD2_CONST("Q_OVERFLOW", INT, IN_Q_OVERFLOW)
    STD2_CONST("IGNORED", INT, IN_IGNORED)
    STD2_CONST("CLOSE", INT, IN_CLOSE)
    STD2_CONST("MOVE", INT, IN_MOVE)
    STD2_CONST("ONLYDIR", INT, IN_ONLYDIR)
    STD2_CONST("DONT_FOLLOW", INT, IN_DONT_FOLLOW)
    STD2_CONST("MASK_ADD", INT, IN_MASK_ADD)
    STD2_CONST("ISDIR", INT, IN_ISDIR)
    STD2_CONST("ONESHOT", INT, IN_ONESHOT)
    STD2_CONST("ALL_EVENTS", INT, IN_ALL_EVENTS)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(inotify)
    STD2_FUNC("init",         "inotify", "",             wrap_inotify)
    STD2_FUNC("add_watch",    "i",       "inotify cs i", wrap_add_watch)
    STD2_FUNC("rm_watch",     "i",       "inotify i",    wrap_rm_watch)
    STD2_FUNC("read",         "event",   "inotify",      wrap_read)
    STD2_FUNC("event_wd",     "i",       "event",        wrap_event_wd)
    STD2_FUNC("event_mask",   "i",       "event",        wrap_event_mask)
    STD2_FUNC("event_cookie", "i",       "event",        wrap_event_cookie)
    STD2_FUNC("event_name",   "cs",      "event",        wrap_event_name)
STD2_END_FUNC_LIST()

STD2_MODULE(inotify, 0)
