#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the opcodes of its
 * own main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, dat;
	void *prt;
	char *prt_val;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	dat = atoi(argv[1]);
	if (dat < 0)
	{
		printf("Error\n");
		exit(2);
	}
	prt = main;
	prt_val = prt;
	i = 0;
	while (i < dat)
	{
		printf("%02hhx", prt_val[i]);
		if (i < dat - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
