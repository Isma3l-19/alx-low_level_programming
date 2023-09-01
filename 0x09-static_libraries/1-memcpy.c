#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer
 * @src: where the contents will be copied from
 * @n: input value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int i = n;

	for (a = 0; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
