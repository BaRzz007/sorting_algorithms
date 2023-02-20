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
				swap_arr(array, array[j], array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
