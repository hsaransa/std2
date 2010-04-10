#ifndef _std2_buffer_h_
#define _std2_buffer_h_

#include <std2priv.h>

typedef struct buffer_s
{
    void* data;
    int size;
    int pos;
    int max;
} buffer;

void std2_buffer_reserve(buffer* buf, int n);
void std2_buffer_free(buffer* b);
void std2_buffer_append_data(buffer* b, const void* p, int n);
void std2_buffer_append_alignment(buffer* b, int align);
void std2_buffer_append_32(buffer* b, std2_int32 v);
void std2_buffer_append_64(buffer* b, std2_int64 v);
std2_int32 std2_buffer_read_32(buffer* b);
int std2_buffer_avail(buffer* b);
void std2_buffer_compact(buffer* b);
int std2_write_buffer(int fd, buffer* buf);
int std2_read_buffer_append(int fd, buffer* buf, int at_least);

#define buffer_reserve          std2_buffer_reserve
#define buffer_free             std2_buffer_free
#define buffer_append_data      std2_buffer_append_data
#define buffer_append_alignment std2_buffer_append_alignment
#define buffer_append_32        std2_buffer_append_32
#define buffer_append_64        std2_buffer_append_64
#define buffer_read_32          std2_buffer_read_32
#define buffer_avail            std2_buffer_avail
#define buffer_compact          std2_buffer_compact
#define write_buffer            std2_write_buffer
#define read_buffer_append      std2_read_buffer_append

#endif
