#include "main.h"
#include <stdlib.h>
/**
 * _free_grid - a function that releases of the second grid
 * @grid: array to manipulate
 * @height: array height
 * Return: 0 (Success)
 */
void _free_grid(char **grid, unsigned int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - a function that splits strings into words
 * @str: string to be split
 * Return: splitted string
 */
char **strtow(char *str)
{
	char **ptr;
	unsigned int a, hgt, b, c, d;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (a = hgt = 0; str[a] != '\0'; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
		{
			hgt++;
		}
	}
	ptr = malloc((hgt + 1) * sizeof(char *));
	if (ptr == NULL || hgt == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (b = d = 0; b < hgt; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
			{
				d++;
			}
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				ptr[b] = malloc((a - d + 2) * sizeof(char));
				if (ptr[b] == NULL)
				{
					_free_grid(ptr, b);
					return (NULL);
				}
				break;
			}
		}
		for (c = 0; d <= a; d++, c++)
		{
			ptr[b][c] = str[d];
		}
		ptr[b][c] = '\0';
	}
	ptr[b] = NULL;
	return (ptr);
}
