#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, tally = 0;
	unsigned long int current;
	unsigned long int temp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = temp >> i;
		if (current & 1)
		{
			tally++;
		}
	}
	return (tally);
}
