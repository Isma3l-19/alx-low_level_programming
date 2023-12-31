#include "main.h"
/**
 * print_binary - a function that prints binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, tally = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
		{
			_putchar('0');
		}
	}
	if (!tally)
	{
		_putchar('0');
	}
}
