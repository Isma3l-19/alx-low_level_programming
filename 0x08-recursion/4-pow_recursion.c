#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * @x: input value
 * @y: input value
 * Return: if y < 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	i = i * _pow_recursion(x, y - 1);
	return (i);
}
