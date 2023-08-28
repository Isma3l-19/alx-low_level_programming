#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer
 * @accept: input value
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				i++;
				break;
			}
			else if (accept[a++] == '\0')
			{
				return (i);
			}
			s++;
		}
	}
	return (i);
}
