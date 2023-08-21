#include "main.h"

/*Declaring the _putchar function*/
int _putchar(char c);

/**
 * puts2 - Prints characters of strings
 * @str: the string
 * Return: print
 */
void puts2(char *str)
{
	int i, j = 0;
	int o;
	char *a = str;

	while (*a != 0)
	{
		a++;
		i++;
	}
	j = i - 1;
	for (o = 0; o <= j; o++)
	{
		if (o % 2)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
