#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns apointer to the newly allocated space
 * @str: the character
 * Return: 0 (Success)
 */
char *_strdup(char *str)
{
	char *c;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		++i;
	}
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = i; str[i]; j++)
	{
		c[j] = str[i];
	}
	return (c);
}
