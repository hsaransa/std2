#ifndef _fork_h_
#define _fork_h_

#include "buffer.h"

typedef struct request_s
{
    int id;
    int fork_id;
    struct std2_param ret_type;
    int return_id;
    struct request_s* next;
} request;

typedef struct fork_state_s
{
    int fork_pid;
    int to_client_fd[2]; // first one for reading, second one for writing
    int to_host_fd[2];

    buffer in_buffer;
    buffer out_buffer;

    int has_yielded_reader;
    int has_yielded_writer;

    int return_processed;

    request* first_request;

    int next_id;
} fork_state;

fork_state* std2_get_fork(int id);
request* std2_new_request(int fork, int mod, int func);
void std2_new_unrefer_request(int fork, int mod, int clas, void* ptr);

#define get_fork            std2_get_fork
#define new_request         std2_new_request
#define new_unrefer_request std2_new_unrefer_request

#endif
