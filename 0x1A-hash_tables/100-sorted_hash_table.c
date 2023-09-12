#include "hash_tables.h"

/**
 * shash_table_create - This creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: NULL - If an error occurs
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0 - Upon failure or -1 if Otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_nod, *tmp;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	index = hash_djb2((unsigned char *)key) %  ht->size;
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->snext;
	}

	new_nod = malloc(sizeof(shash_node_t));
	if (!new_nod)
	{
		return (0);
	}
	new_nod->key = strdup(key);
	if (new_nod->key == NULL)
	{
		free(new_nod);
		return (0);
	}
	new_nod->value = strdup(value);
	new_nod->next = ht->array[index];
	ht->array[index] = new_nod;

	if (ht->shead == NULL)
	{
		new_nod->sprev = NULL;
		new_nod->snext = NULL;
		ht->shead = new_nod;
		ht->stail = new_nod;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_nod->sprev = NULL;
		new_nod->snext = ht->shead;
		ht->shead->sprev = new_nod;
		ht->shead = new_nod;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_nod->sprev = tmp;
		new_nod->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_nod;
		else
			tmp->snext->sprev = new_nod;
		tmp->snext = new_nod;
	}
	return (1);
}


/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
