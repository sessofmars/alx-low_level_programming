#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: head node of the linked list
 * @str: pointer to string to be duplicated
 * Return: address of new element or NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int length;

	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	length = 0;
	while (new_node->str[length])
		length++;

	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
