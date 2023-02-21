#include "main.h"
#include <stdio.h>

/**
 * _abs - compute an absolute value of an integer
 * @r: The integer to be computed
 * Return: An absolute value of a number or zero
 */

int _abs(int r)
{
	if (r < 0)
	{
	int abs_val;

	abs_val = r * -1;
	return (abs_val);
	}
	return (r);
}
