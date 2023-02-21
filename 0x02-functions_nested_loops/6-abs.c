#include "main.h"
#include <stdio.h>

/**
 *_abs - computes the absolute value of an integer
 *@c: the number to compute
 *Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
