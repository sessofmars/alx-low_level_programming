#include "lists.h"

/**
 * listint_len - calculate number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}

	return (num_elem);
}
