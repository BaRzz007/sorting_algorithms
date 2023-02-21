#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_arr(&array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap_arr - utility function to swap 2 array elements
 * @arr: pointer to the array to be swapped
 * @idx1: first index
 * @idx2: second index
 */
void swap_arr(int **arr, size_t idx1, size_t idx2)
{
	int temp, *array;
	
	array = *arr;
	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}
