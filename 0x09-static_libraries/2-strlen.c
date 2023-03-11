#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: length of string
 * Return: void
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	return (n);
}
