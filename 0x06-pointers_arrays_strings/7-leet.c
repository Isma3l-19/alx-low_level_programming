#include "main.h"
/**
 * leet - encodes the number 1337 into speak
 * @a: input value
 * Return: a
 */
char *leet(char *a)
{
	int i, j;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[i])
			{
				a[i] = s2[j];
			}
		}
	}
	return (a);
}
