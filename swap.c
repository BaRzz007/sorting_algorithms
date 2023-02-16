#include "sort.h"

/**
 * swap_arr - utility function to swap 2 array elements
 * @arr: pointer to the array to be swapped
 * @idx1: first index
 * @idx2: second index
 */
void swap_arr(int *arr, int idx1, int idx2)
{
	int temp;

	temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

/**
 * swap_list - utility function to swap 2 list items
 * @node_a: pointer to one of the nodes to be swapped
 * @node_b: pointer to one of the nodes to be swapped
 */
void swap_list(listint **node_a, listint **node_b)
{
	listint *ptr_node_a, *ptr_node_b, *temp;

	ptr_node_a = node_a;
	ptr_node_b = node_b;

	temp = ptr_node_a->prev;
	ptr_node_a->prev = ptr_node_b->prev;
	ptr_node_b->prev = temp;

	temp = ptr_node_a->next;
	ptr_node_a->next = ptr_node_b->next;
	ptr_node_b->next = temp;
}
