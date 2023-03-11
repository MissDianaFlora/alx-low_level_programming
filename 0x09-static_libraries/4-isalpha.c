#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to be checked
 *
 * Return 1 if alphabet either lower or upper and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
