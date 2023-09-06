#include <stdio.h>
/**
 * main - a function that prints number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
