#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all arguments in a program
 * @ac: loop counter for argument
 * @av: argument vector(array)
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int a, b, c, d;

	if (av == NULL || ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
		{
			return (NULL);
		}
		for (c = 0; av[b][c] != '\0'; c++)
		{
			a++;
		}
		a++;
	}
	arr = malloc((a + 1) * sizeof(char));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			arr[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
		{
			arr[d] = av[b][c];
		}
	}
	arr[d] = '\0';
	return (arr);
}
