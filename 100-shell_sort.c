#include "sort.h"

/**
*swap_arr - utility function to swap 2 array elements
*@array: pointer to the array to be swapped
*@idx1: first index
*@idx2: second index
*/
void swap_arr(int *array, size_t idx1, size_t idx2)
{

	int temp, *array;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}
/**
 * shell_sort - shell sorting with knuth sequence
 * @array: array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	int i, j;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
			for (j = i; j >= gap &&
			 (array[j] < array[j - gap]); j -= gap)
				swap_arr(array, j, j - gap);
		print_array(array, size);
		gap /= 3;
	}
}
