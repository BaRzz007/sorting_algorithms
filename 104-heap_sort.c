#include "sort.h"
/**
  * heap_sort - heap sort algorithm
  * @array: array to sort
  * @size: size of array
  */
void heap_sort(int *array, size_t size)
{
	int i, tmp;

	for (i = size / 2 - 1; i >= 0; i--)
		heap_s(array, i, size, size);
	for (i = size -1; i >=0; i--)
	{
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;
		print_array(array, size);
		heap_s(array, i, 0, size);
	}
}

/**
 * heap_s - heap sort algorithm
 * @array: array to sort
 * @idx: first index
 * @idx2: second index
 *
 * Return: nothing
 */

void heap_s(int *array, int idx1, int idx2, size_t size)
{
	int max = idx2;
	int left = 2 * idx2 + 1;
	int right = 2 * idx2 + 2;
	int tmp;

	if (left < idx1 && array[left] > array[max])
		max = left;
	if (right < idx1 && array[right] > array[max])
		max = right;
	if (max != idx2)
	{
		tmp = array[idx2];
		array[idx2] = array[max];
		array[max] = tmp;
		print_array(array, size);
		heap_s(array, idx1, max, size);
	}
}
