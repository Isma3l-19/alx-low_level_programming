#include "main.h"

/*Declaring the _putchar function*/
int _putchar(char c);
/**
 * _puts - A progra that prints a string followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
