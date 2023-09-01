#include "main.h"
/**
 * char* _strcpy - A function that copies a string
 * @dest: destination
 * @src: source
 * Return: the string dest
 * Return: the pointer to dest
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
