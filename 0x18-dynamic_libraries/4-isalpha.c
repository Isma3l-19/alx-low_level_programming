#include "main.h"
/**
 * _isalpha - A program that checks for alphabetic characters
 * @c: the char to be checked
 * Return: 1 if c is a letter,lowercaseor uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
