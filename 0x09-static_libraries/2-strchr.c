#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer
 * @c: the character
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] < '\0'; i++)
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
	return (0);
}
