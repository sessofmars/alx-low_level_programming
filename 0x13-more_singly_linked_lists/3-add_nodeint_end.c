#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to head
 * @n: new node data
 * Return: pointer to new node or NULL if fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new_node;
	listint_t *prev_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;

	while (prev_node->next != NULL)
		prev_node = prev_node->next;

	prev_node->next = new_node;

	return (new_node);
}
