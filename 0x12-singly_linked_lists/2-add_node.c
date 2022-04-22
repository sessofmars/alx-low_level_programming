#include "lists.h"

/**
 * add_node - adds new node at the beginning of a linked list
 * @head: pointer to the head node
 * @str: pointer to string to be duplicated
 * Return: pointer to new element
*/
list_t *add_node(list_t **head, const char *str)
{
	int length;

	list_t *new_node = malloc(sizeof(list_t));

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

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
