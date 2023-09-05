#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	i = j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	cat malloc(sizeof(char) * (i + j + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
