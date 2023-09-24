#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * @format: format specifiers
 * Return: output
 */

void print_all(const char * const format, ...)
{
	va_list store;
	char *str, *spt; /* str - string, spt - separator */
	int x;

	va_start(store, format);
	x = 0;
	while (format && format[x])
	{
		spt = "";
		if (format[x + 1])
			spt = ", ";
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(store, int), spt);
			break;
		case 'i':
			printf("%d%s", va_arg(store, int), spt);
			break;
		case 'f':
			printf("%f%s", va_arg(store, double), spt);
			break;
		case 's':
			str = va_arg(store, char *);
			if (!str || !*str)
			{
				str = "(nil)";
			}
			printf("%s%s", str, spt);
			break;
		}
		x++;
	}
	va_end(store);
	printf("\n");
}
