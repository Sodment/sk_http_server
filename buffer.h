#ifndef _BUFFER_H_
#define _BUFFER_H_
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
//XD

typedef struct
{
	int * buffer;
	int   buf_in;
	int   buf_out;
	int   buffer_max;
}bounded_buffer_t;

extern bounded_buffer_t bb;

void init_buffer(int buffer_max);
int buffer_add(int item);
int buffer_get();
int is_buffer_full();
int is_buffer_empty();
void destroy_buffer();


#endif
