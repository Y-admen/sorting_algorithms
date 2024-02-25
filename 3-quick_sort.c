#include "sort.h"

/**
 * swap_array - swap two nodes in linked list
 * @a: pointer to  a
 * @b:pointer to  b
 */

void swap_array(int *a, int *b)
{
	int temp;

	if (*a != *b)
	{
		temp = *a;
		*a = *b;
		*b =  temp;
	}
}

/**
 * partition - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int partition(int *array, size_t size, size_t left, size_t right)
{
	size_t above, below;
	int *pivot;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_array(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_array(array + above, pivot);
		print_array(array, size);
	}

	return (above);

}

/**
 * quicksort - qucksort algorithm implementation
 * @array: array to be sorted
 * @size: size of the array
 * @first: first element of arr
 * @last: last element of arr
 */
void quicksort(int *array, size_t size, size_t first, size_t last)
{
	size_t p;

	if (first < last)
	{
		p = partition(array, size, first, last); /* pivote index*/
		quicksort(array, size, first, p - 1);
		quicksort(array, size, p + 1, last);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size || size < 2)
		return;
	quicksort(array, size, 0, size - 1);
}
