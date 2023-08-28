#include "main.h"
/**
 * _strpbrk - a function tha searches a string for any set of bytes
 * @s: a pointer
 * @accept: input value
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char i;

	while (*s)
	{
		for (char *i = accept; *i; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return ('\0');
}
