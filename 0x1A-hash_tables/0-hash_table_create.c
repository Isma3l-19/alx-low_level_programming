#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash tables
 * @size: size of array
 * Return: hash table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	unsigned long int i;

	hst = malloc(sizeof(hash_table_t));
	if (hst == NULL)
	{
		return (NULL);
	}
	hst->size = size;
	hst->array = malloc(sizeof(hash_node_t *) * size);
	if (hst == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hst->array[i] = NULL;
	}
	return (hst);
}
