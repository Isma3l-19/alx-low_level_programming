#include "main.h"
/**
 * print_numbers - A program that prints numbers 0 to 9 followed by new line
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
