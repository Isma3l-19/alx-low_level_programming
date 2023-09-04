#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function tha searches a string for any set of bytes
 * @s: a pointer
 * @accept: input value
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
