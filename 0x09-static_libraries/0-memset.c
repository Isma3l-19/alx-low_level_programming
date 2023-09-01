#include "main.h"
/**
 * _memset - a function that fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: input value
 * @n: bytes to be changed
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
