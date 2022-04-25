#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: points to the head node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}

	return (num_node);
}
