#include "main.h"
/**
 * _abs - A program that computes absolute value of an integer
 * @n: the value to be computed
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
