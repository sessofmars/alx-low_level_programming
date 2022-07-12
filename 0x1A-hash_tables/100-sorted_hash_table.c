#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table.
 * @size: the size of new sorted hash table.
 *
 * Return: a pointer to the new sorted hash table or NULL otherwise.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_ht;
	unsigned long int i;

	sorted_ht = malloc(sizeof(shash_table_t));
	if (sorted_ht == NULL)
		return (NULL);

	sorted_ht->size = size;
	sorted_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (sorted_ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sorted_ht->array[i] = NULL;
	sorted_ht->shead = NULL;
	sorted_ht->stail = NULL;

	return (sorted_ht);
}

/**
 * shash_table_set - adds an element to a sorted hash table.
 *
 * @ht: pointer to the sorted hash table.
 * @key: the key to add - cannot be an empty string.
 * @value: the value associated with key.
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *sorted_hash_node, *temp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->snext;
	}

	sorted_hash_node = malloc(sizeof(shash_node_t));
	if (sorted_hash_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	sorted_hash_node->key = strdup(key);
	if (sorted_hash_node->key == NULL)
	{
		free(value_copy);
		free(sorted_hash_node);
		return (0);
	}
	sorted_hash_node->value = value_copy;
	sorted_hash_node->next = ht->array[index];
	ht->array[index] = sorted_hash_node;

	if (ht->shead == NULL)
	{
		sorted_hash_node->sprev = NULL;
		sorted_hash_node->snext = NULL;
		ht->shead = sorted_hash_node;
		ht->stail = sorted_hash_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		sorted_hash_node->sprev = NULL;
		sorted_hash_node->snext = ht->shead;
		ht->shead->sprev = sorted_hash_node;
		ht->shead = sorted_hash_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		sorted_hash_node->sprev = temp;
		sorted_hash_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = sorted_hash_node;
		else
			temp->snext->sprev = sorted_hash_node;
		temp->snext = sorted_hash_node;
	}

	return (1);
}

/**
 * shash_table_get - retrieve the value associated with a key in
 *					a sorted hash table.
 *
 * @ht: pointer to the sorted hash table.
 * @key: the key to get the value of.
 *
 * Return: the value associated with key in ht or NULL if fails.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *sorted_hash_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	sorted_hash_node = ht->shead;
	while (sorted_hash_node != NULL && strcmp(sorted_hash_node->key, key) != 0)
		sorted_hash_node = sorted_hash_node->snext;

	if (sorted_hash_node == NULL)
		return (NULL);
	return (sorted_hash_node->value);
}

/**
 * shash_table_print - prints a sorted hash table in order.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *sorted_hash_node;

	if (ht == NULL)
		return;

	sorted_hash_node = ht->shead;
	printf("{");
	while (sorted_hash_node != NULL)
	{
		printf("'%s': '%s'", sorted_hash_node->key, sorted_hash_node->value);
		sorted_hash_node = sorted_hash_node->snext;
		if (sorted_hash_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *sorted_hash_node;

	if (ht == NULL)
		return;

	sorted_hash_node = ht->stail;
	printf("{");
	while (sorted_hash_node != NULL)
	{
		printf("'%s': '%s'", sorted_hash_node->key, sorted_hash_node->value);
		sorted_hash_node = sorted_hash_node->sprev;
		if (sorted_hash_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *sorted_hash_node, *temp;

	if (ht == NULL)
		return;

	sorted_hash_node = ht->shead;
	while (sorted_hash_node)
	{
		temp = sorted_hash_node->snext;
		free(sorted_hash_node->key);
		free(sorted_hash_node->value);
		free(sorted_hash_node);
		sorted_hash_node = temp;
	}

	free(head->array);
	free(head);
}
