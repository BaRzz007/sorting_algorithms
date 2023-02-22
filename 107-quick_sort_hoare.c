#include "sort.h"

/**
 * quick_sort_hoare - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_quick_sort(&array, size, 0, size - 1);
}

/**
 * _quick_sort - internal working quick sort function
 * @array: array to be sorted
 * @size: size of the array
 * @left: lower bound of the array
 * @right: upper bound of the array
 */
void _quick_sort(int **array, size_t size, int left, int right)
{
	int pivot_idx, *arr;

	if (left > right)
		return;

	arr = *array;
	pivot_idx = partition(&arr, size, left, right);

	_quick_sort(&arr, size, left, pivot_idx - 1);
	_quick_sort(&arr, size, pivot_idx + 1, right);
}

/**
 * partition - partitions the array around the chosen pivot
 * @array: array to be partitioned
 * @size: size of the array
 * @left: lower bound
 * @right: upper bound
 * Return: returns the final position of the pivot
 */
int partition(int **array, size_t size, int left, int right)
{
	int *arr, pivot, leftmark, rightmark;

	arr = *array;
	pivot = arr[right];

	leftmark = left;
	rightmark = right - 1;
	while (leftmark <= rightmark)
	{
		while (leftmark <= rightmark && arr[leftmark] <= pivot)
			leftmark++;
		while (leftmark <= rightmark && arr[rightmark] >= pivot)
			rightmark--;
		if (leftmark < rightmark)
		{
			swap_arr(&arr, leftmark, rightmark);
			leftmark++;
			rightmark--;
			print_array(arr, size);
		}
	}
	if (leftmark != right)
	{
		swap_arr(&arr, leftmark, right);
		print_array(arr, size);
	}

	return (leftmark);
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
