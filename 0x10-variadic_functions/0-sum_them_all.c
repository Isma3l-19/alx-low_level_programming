#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns sum of all its parameters
 * @n: the number of parameters
 * @...: variable number of parameters to calculate sum of
 * Return: 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list store;
	unsigned int i, sum = 0;

	va_start(store);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(store, int);
	}
	va_end(store);
	return (sum);
}
