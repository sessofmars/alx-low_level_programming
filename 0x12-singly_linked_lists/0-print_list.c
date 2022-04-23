#include "lists.h"

/**
 * list_len - calculates number of elements in a linked list
 * @h: pointer to the structure
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int num_elem;

	num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}

	return (num_elem);
}
