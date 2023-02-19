#ifndef SORT_H
#define SORT_H
#include <stddef.h>

#define TRUE 1
#define FALSE 0

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_arr(int **, size_t, size_t);
void swap_list(listint_t **, listint_t **);
void bubble_sort(int *, size_t);

#endif
