#include "main.h"
/**
 * print_last_digit - A program that the last digit of a number
 * @n: the number to be treated
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 10)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
