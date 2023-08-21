#include "main.h"
/**
 * char* _strcpy - A function that copies a string
 * @dest: the one copying to
 * @src: the one copying from
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
