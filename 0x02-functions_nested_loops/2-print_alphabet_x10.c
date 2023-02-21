#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in ten lines
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int j = 0;

	while (j <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	j++;
	}
}
