#include "hash_tables.h"

/**
 * hash_table_get - This retrieves the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL - if key could not be found.
 * Or the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) %  ht->size;

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->key);
		node = node->next;
	}

	return (NULL);
}
