#include "main.h"
/**
 * malloc_check - a function that allocates memory
 * @b: input value
 * Return: pointer to the alocated memory
 */
void *malloc_check(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
