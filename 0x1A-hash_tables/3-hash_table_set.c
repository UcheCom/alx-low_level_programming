#include "hash_tables.h"

/**
 * hash_table_set - This adds or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: 0 - Upon failure.1 - Otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nod;
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	/*This checks if the key already exists*/
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	/*This creates a new node and inserts it at beginning of the list*/
	new_nod = malloc(sizeof(hash_node_t));
	if (new_nod == NULL)
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
	if (!new_nod->value)
	{
		free(new_nod->key);
		free(new_nod);
		return (0);
	}
	new_nod->next = ht->array[index];
	ht->array[index] = new_nod;

	return (1);
}
