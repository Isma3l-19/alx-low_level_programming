#include "main.h"
/**
 * cap_string - a function that capitalizes characters in a string
 * @ptr: the string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *ptr)
{
	int index = 0;
	int is_separator = 0;

	while (ptr[index])
	{
		if (ptr[index] >= 'a' && ptr[index] <= 'z')
		{
			if (index == 0 || is_separator)
			{
				ptr[index] -= 32;
			}
			is_separator = 0;
		}
		else
		{
			if (ptr[index] == ' ' || ptr[index] == '\t' || ptr[index] == '\n' ||
					ptr[index] == ',' || ptr[index] == ';' || ptr[index] == '.' ||
					ptr[index] == '!' || ptr[index] == '?' || ptr[index] == '"' ||
					ptr[index] == '(' || ptr[index] == ')' || ptr[index] == '{' ||
					ptr[index] == '}')
			{
				is_separator = 1;
			}
		}
		index++;
	}
	return (ptr);
}

