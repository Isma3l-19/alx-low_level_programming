#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * the function returns index place if comparison = true, otherwise -1
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
