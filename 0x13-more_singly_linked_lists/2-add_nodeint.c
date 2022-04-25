#include "lists.h"

/**
 * add_nodeint - inserts new node at the beginning of a list
 *@head: pointer to head
 *@n: data of new node
 * Return: address of new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
