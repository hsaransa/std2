#include <std2priv.h>
#include <assert.h>
#include <stdlib.h>

int std2_last_delay_id;

typedef struct delayed_return_s
{
    int              state;
    std2_return_func func;
    void*            arg0;
    void*            arg1;
} delayed_return;

static int             num_returns;
static delayed_return* returns;

int std2_delay_return(std2_return_func f, void* arg)
{
    int i;

    assert(std2_last_delay_id == 0);

    for (i = 0; i < num_returns; i++)
    {
        if (returns[i].state == 0)
            break;
    }

    if (i == num_returns)
    {
        num_returns++;
        returns = realloc(returns, sizeof(delayed_return) * num_returns);
        assert(returns);
    }

    returns[i].state = 1;
    returns[i].func = f;
    returns[i].arg0 = arg;
    returns[i].arg1 = arg;

    std2_last_delay_id = i + 1;
    return std2_last_delay_id;
}

void std2_continue_return(int id, std2_return_func func, void* arg)
{
    int i = id - 1;
    assert(i >= 0 && i < num_returns);
    assert(returns[i].state == 1);
    assert((returns[i].func == 0) != (func == 0));

    if (func)
        returns[i].func = func;
    returns[i].arg1 = arg;
    returns[i].state = 2;
}

void std2_abort_return(int id)
{
    int i = id - 1;
    assert(i >= 0 && i < num_returns);
    assert(returns[i].state == 1);
    returns[i].state = 3;
}

int std2_get_return()
{
    int i;
    for (i = 0; i < num_returns; i++)
        if (returns[i].state == 2 || returns[i].state == 3)
            return i + 1;
    return 0;
}

int std2_do_return(int id, void* ret)
{
    int i = id - 1;
    assert(i >= 0 && i < num_returns);
    assert(returns[i].state == 2 || returns[i].state == 3);

    if (returns[i].state == 3)
    {
        returns[i].state = 0;
        return 1;
    }

    returns[i].func(id, ret, returns[i].arg0, returns[i].arg1);
    returns[i].state = 0;
    return 0;
}
