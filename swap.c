#include "sort.h"
/**
 * _swap - swap two ints
 * @arr: array to change
 * @i: first int
 * @j: sec int
*/

void _swap(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	return (arr);
}
