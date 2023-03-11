#include "main.h"
#include <stdio.h>

/**
 * _abs - computes an absolute value of an integer
 * @r: the integer to be computed
 * Return: an absolute value of a number or 0
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
