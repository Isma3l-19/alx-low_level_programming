#include "main.h"
/**
 * more_numbers - A program that prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	char ch;
	int i;

	for (ch = '0'; ch <= '14'; ch++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i);
		}
		_putchar(ch);
	}
}
