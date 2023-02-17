#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int is_sorted;

	is_sorted = FALSE;
	while (!is_sorted)
	{
		is_sorted = TRUE;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_arr(&array, j, j + 1);
				is_sorted = FALSE;
				print_array(array, size);
			}
		}
	}
}
