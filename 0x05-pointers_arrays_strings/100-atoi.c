#include "main.h"
/**
 * _atoi - function that converts strings to integers
 * @s: the string to be converted
 * Return: the converted string
 */
int _atoi(chnar *s)
{
	int a, b, c, len, d, digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (a < len && d == 0)
	{
		if (s[a] == '-')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
			{
				c = c * 10 + digit;
				d = 1;
			}
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			d = 0;
		}
		a++;
	}
	if (d == 0)
	{
		return (0);
	}
	return (n);

}
