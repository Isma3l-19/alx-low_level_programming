#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: input value
 * Return: factorial of n
 */
int factorial(int n)
{
	int i = n;

	if (n < 1)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	i = n * factorial(n - 1);
	return (i);
}
