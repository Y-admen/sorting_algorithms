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
	else
		return;
}

/**
 * partition -  partition the array
 * @array: array to be sorted
 * @size: size of the array
 * @first: first element of arr
 * @last: last element of arr
 * Return: return the position of the last element(pivot) sorted
 */

int partition(int *array, size_t size, int first, int last)
{
	int i, j, pivot;

	pivot = array[last];
	for (i = j = first; j < last; j++)
	{
		if (array[j] < pivot)
			swap_array(&array[i++], &array[j]);
			print_array((const int *)array, size);
	}
	swap_array(&array[last], &array[i]);
	print_array((const int *)array, size);
	return (i);
}

/**
 * quicksort - qucksort algorithm implementation
 * @array: array to be sorted
 * @size: size of the array
 * @first: first element of arr
 * @last: last element of arr
 */
void quicksort(int *array, size_t size, int first, int last)
{
	int p;

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
	if (!array || !size)
		return;
	quicksort(array, size, 0, (int)size - 1);
}
