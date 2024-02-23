#include "sort.h"

/**
 * _swap - swap two nodes in linked list
 * @a: pointer to node a
 * @b:pointer to node b
*/


void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->next = a;
	b->prev = a->prev;
	a->prev = b;
}
/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending
 * using the Insertion sort algorithm
 * @list: double linkred list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				_swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
