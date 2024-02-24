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

	if (!array || !size)
	return;


	for (gap = calc_gap(size);; gap = (gap - 1) / 3)
	{
		for (j = gap, i = j - gap; j > gap - 1 && j < size - 1; j++, i++)
		{
			if (array[i] > array[j])
				swap_array(&array[i], &array[j]);
			else
				break;
		}
		print_array(array, size);
	}
}
