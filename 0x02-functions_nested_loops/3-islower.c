#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: the character to be checked
 *Return: 0 0r 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

