#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that prints each array element on a newline
 * @array: array
 * @size: the size of the array
 * @action: pointger to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
