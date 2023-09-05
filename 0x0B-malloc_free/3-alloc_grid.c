#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid - a function that returns a pointer to a 2D array
 * @width: input value
 * @height: input value
 * Return: NULL on failure
 */
int **alloc_grind(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr = malloc(sizeof(int *) * height);

		if (ptr[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
			{
				 free(ptr[i]);
			}
			 free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; i < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
