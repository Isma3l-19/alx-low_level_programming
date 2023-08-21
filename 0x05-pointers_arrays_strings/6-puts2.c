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
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[count]);
			count++;
		}
	}
}
