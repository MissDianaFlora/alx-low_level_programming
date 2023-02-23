#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c :character to be checked
 * Return: 1 if c is uppercase character or 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
