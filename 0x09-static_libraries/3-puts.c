#include "main.h"
/**
 *_puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
