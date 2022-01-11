#ifndef _AUX_H_
#define _AUX_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <pthread.h>
#include "log.h"

extern pthread_mutex_t lock_requests_mtx;
extern pthread_mutex_t lock_size_mtx;

static int total_requests;
static int total_size;

void increment_request();
int show_total_requests();
void add_to_total_size(int new_size);
int show_total_size();
int check_file_exists(const char * path);
int file_size(const char *path);
int check_folder_exists(const char *path);
int set_index(char *path);
void trim_resource(char * resource_location);

#endif