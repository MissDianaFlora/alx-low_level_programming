#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: the number of times the character _ should be printed
 * line should end with \n
 *
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
