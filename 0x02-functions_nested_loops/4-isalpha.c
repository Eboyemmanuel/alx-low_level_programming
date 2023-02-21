#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: the charater to check
 *Return: 1 for lowercase/uppercase or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
