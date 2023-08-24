#include "main.h"
/**
 * reverse_array - a function that reverses the contents of an array
 * @a: an array of integers
 * @n: the number of elemnts to swap
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
