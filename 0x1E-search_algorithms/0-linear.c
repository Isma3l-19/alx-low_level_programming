#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm to search for
 * values in an array
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: first index where value is located otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}
