#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: the string to concatenate from src
 * @src: the string to concatenate to dest
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		destg[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
