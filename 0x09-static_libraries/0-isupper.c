#include "main.h"
/**
 * _isupper - a function that checks for upper case
 * @c: the character to check
 * Return: 1 if true, 0 if false
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
