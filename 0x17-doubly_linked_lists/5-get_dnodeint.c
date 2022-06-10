#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t list
 *
 * @head: pointer to the head node
 * @index: index of node, starting at 0
 * Return: node at index or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		index--;
	}
	return (head);
}
