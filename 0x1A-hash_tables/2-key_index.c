#include "hash_tables.h"
/**
 * key_index - function that returns the index of a key
 * @key: key to get index from
 * @size: size of array of the hash table
 * Return: index of the key
 * Description: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
