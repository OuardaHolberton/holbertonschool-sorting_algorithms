#include "sort.h"

/**
 * partition - Lomuto partition scheme
 * @array: the array to sort
 * @lo: starting index
 * @hi: ending index
 * @size: size of the full array
 *
 * Return: the index of the pivot
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, tmp;
	int i, j;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[hi] != array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_recursive - recursive helper for quick sort
 * @array: the array to sort
 * @lo: starting index
 * @hi: ending index
 * @size: size of the full array
 */
void quick_sort_recursive(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi)
		return;
	p = partition(array, lo, hi, size);
	quick_sort_recursive(array, lo, p - 1, size);
	quick_sort_recursive(array, p + 1, hi, size);
}

/**
 * quick_sort - sorts an array using Quick sort
 * @array: the array to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
