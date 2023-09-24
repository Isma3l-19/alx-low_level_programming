#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings followed by a newline
 * @separator: check commas
 * @n: numbers of elements
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list store;
	char *c;
	unsigned int u = 0;

	va_start(store, n);
	while (u < n)
	{
		c = va_arg(store, char *);
		if (c)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}
		if (u < (n - 1) && separator)
		{
			printf("%s", separator);
		}
		u++;
	}
	va_end(store);
	printf("\n");
}
