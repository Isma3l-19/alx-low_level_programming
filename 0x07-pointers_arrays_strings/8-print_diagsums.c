#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of two diagnols
 * @a: pointer
 * @size: input value
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
