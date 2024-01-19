#include "sort.h"

/**
 * bubble_sort -  function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || !size)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				_swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
