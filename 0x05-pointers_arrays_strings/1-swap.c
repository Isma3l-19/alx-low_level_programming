#include "main.h"
/**
 * swap_int - a program that swaps values of two integers
 * @a: the value to be swapped to b
 * @b: the value to be swapped to a
 * Return: a, b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
