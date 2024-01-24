#include "sort.h"
/**
 * selection_sort -  function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (k = i + 1, j = size - 1; j < i; j--)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (array[i] > array[k])
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}

}
