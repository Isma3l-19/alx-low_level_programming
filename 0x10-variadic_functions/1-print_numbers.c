#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers followed by a newline
 * @separator: string between printed numbers
 * @n: number of integers passed to the function
 * @...: variable number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list store;
	unsigned int i = 0;

	va_start(store, n);

	while (i < n)
	{
		printf("%d", va_arg(store, int));
		if (separator)
		{
			if (x < (n - 1))
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	va_end(store);
	printf("\n");
}
