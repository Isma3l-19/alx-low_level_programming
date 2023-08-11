#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - A program that checks the sign of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		ptintf("is negative\n");
	}
	return (0);
}
