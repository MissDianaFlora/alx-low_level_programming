#include "main.h"

/**
 * _islower - check for lowercase character
 * @c :character to be checked
 * Return: 1 if c is lowercase characer or 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

