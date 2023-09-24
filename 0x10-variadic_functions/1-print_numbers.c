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
	unsigned int tally;

	va_start(store, n);

	for (tally = 0; tally < n; tally)
	{
		printf("%u", va_arg(store, int));
		if (tally != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(store);
}
