#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves associated value with a key in ht
 * @ht: pointer to hash table
 * @key: key toget value from
 * Return: associated value otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
	{
		return (NULL);
	}
	node = ht->srray[idx];
	while (node && strcmp(node->key, key) != 0)
	{
		node = mode->next;
	}
	return ((node == NULL) ? NULL : node->value);
}
