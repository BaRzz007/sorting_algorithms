#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_arr(int *, int, int);
void swap_list(listint **, listint **);

#endif
