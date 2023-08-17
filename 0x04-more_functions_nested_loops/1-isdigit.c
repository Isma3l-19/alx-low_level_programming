#include "main.h"
/**
 * _isdigit - A program that checks for digits
 * @c: the character to be checked
 * Return: 1 is c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
