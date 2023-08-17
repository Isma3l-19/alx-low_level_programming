#include "main.h"
/**
 * print_most_numbers - A program that prints numbers 0 to 9
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
