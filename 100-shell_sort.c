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
 * calc_gap - func calc the gap
 * @size: size of array
 * Return: the gap value
*/
int calc_gap(size_t size)
{
	size_t n;

	n = 1;
	while (n < size)
	{
		n = n * 3 + 1;
	}
	return ((n - 1) / 3);

}
/**
 * shell_sort - sort array with shell kenuth  algorithm
 * @array: array of integer
 * @size: size of array
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (!array || !size || size < 2)
		return;


	for (gap = calc_gap(size); gap > 0; gap /= 2)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
		}
		array[j] = temp;
	}
	print_array(array, size);
}
