#ifndef _LOG_H_
#define _LOG_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef enum 
{
	ERROR = 0,
	WARNING,
	INFO,
	DEBUG
}server_log_id_t;


typedef struct
{
	int id;
	char *name;
}server_log_t;

typedef int log_t;
extern log_t current_log_no;


int get_log_id();
void set_log(const char * log_name);
int print_log(log_t log_level,char * fmt, ...);
void set_next_log();

#endif
