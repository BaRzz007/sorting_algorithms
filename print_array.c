#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * swap_arr - utility function to swap 2 array elements
 * @arr: pointer to the array to be swapped
 * @idx1: first index
 * @idx2: second index
 */
void swap_arr(int **arr, size_t size, size_t idx1, size_t idx2)
{
        int temp, *array;

        array = *arr;
        temp = array[idx1];
        array[idx1] = array[idx2];
        array[idx2] = temp;
        print_array(array, size);
}
