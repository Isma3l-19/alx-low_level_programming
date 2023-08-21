#include <stdio.h>
#include "main.h"
/**
 * print_array - A function that prints elements of an array
 * @a: Array name
 * @n: the number of elements of the array to be printed
 * Return: a, b
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
