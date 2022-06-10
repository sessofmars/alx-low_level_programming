#include "lists.h"

/**
 * dlistint_len - calculate the number of elements in a linked dlistint_t
 *
 * @h: a pointer to head node
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}

	return (num_elem);
}
