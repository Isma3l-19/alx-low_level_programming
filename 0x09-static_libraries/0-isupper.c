#include "main.h"
/**
 * _isupper - a function that checks for uppecase letters
 * @c: the char to check
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
