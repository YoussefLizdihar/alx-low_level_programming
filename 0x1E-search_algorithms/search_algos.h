#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
