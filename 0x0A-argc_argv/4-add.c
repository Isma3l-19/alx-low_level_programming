#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * num_check - a function that checks strings if there are digits
 * @str: array string
 * Return: 0 (Success)
 */
int num_check(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - a function that prints the name of a program
 * @argc: number of arguments
 * @argv: array arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;
	int str_to_int;

	while (count < argc)
	{
		if (num_check(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
