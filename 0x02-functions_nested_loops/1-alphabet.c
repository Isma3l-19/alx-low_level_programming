#include "main.h"
/**
 * print_alpabet - A program that prints alphabets in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
