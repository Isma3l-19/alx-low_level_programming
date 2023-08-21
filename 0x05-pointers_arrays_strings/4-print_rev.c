#include "main.h"

/*Declaring the _putchar function*/
int _putchar(char c);
/**
 * print_rev - prints a string in reverse
 * @s: the sring to be checked
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != 0)
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
