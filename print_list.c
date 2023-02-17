#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

/**
 * swap_list - utility function to swap 2 list items
 * @node_a: pointer to one of the nodes to be swapped
 * @node_b: pointer to one of the nodes to be swapped
 */
void swap_list(listint_t **node_a, listint_t **node_b)
{
        listint_t *ptr_node_a, *ptr_node_b, *temp;

        ptr_node_a = *node_a;
        ptr_node_b = *node_b;

        temp = ptr_node_a->prev;
        ptr_node_a->prev = ptr_node_b->prev;
        ptr_node_b->prev = temp;

        temp = ptr_node_a->next;
        ptr_node_a->next = ptr_node_b->next;
        ptr_node_b->next = temp;
}
