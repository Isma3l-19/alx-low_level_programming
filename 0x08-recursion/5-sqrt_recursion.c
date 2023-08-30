#include "main.h"
/**
 * find_sqrt - finds the square root of a number
 * @num: number to find
 * @root: root
 * Return: the square root if the number = natural square root
 * 1 if the number != natural square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (1);
	}
	return (find_sqrt(num, root + 1));
			}
			/**
			 *  _sqrt_recursion - a function that returns the natural square root
			 *  @n: input value
			 *   Return: -1 if n != natural square root
			 */
			int _sqrt_recursion(int n);
			{
				int root = 0;

				if (n < 0)
				{
					return (-1);
					}
					if (n == 1)
					{
						return (1);
						}
						return (find_sqrt(n, root));
			}
