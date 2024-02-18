#include "sort.h"

/**
 * _swap - swap two nodes in linked list
 * @a: pointer to node a
 * @b:pointer to node b
*/


void _swap(listint_t *a, listint_t *b)
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
	listint_t *i;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		while ((i->prev) && (i->prev->n > i->n))
		{
			_swap(i, i->prev);
			if (!i->prev)
				*list = i;
			print_list((const listint_t *)*list);
		}
		i = i->next;
	}
}
