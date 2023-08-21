#include "main.h"
/*Declaring _putchar function*/
int _putchar(char c);

/**
 * puts_half - prints half of a string followed by new line
 * @str: the string
 * Return: half of the string
 */
void puts_half(char *str)
{
	int i, n, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length / 2);

	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}
	for (i = n; str[i] != '\0'; a++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
