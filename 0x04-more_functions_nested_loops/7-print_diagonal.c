#include "main.h"

/**
 * print_diagonal - THis draws a diagonal line using cahracter \.
 * @n: The number of \ character to be drawn.
 */

void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	for (gap = 0; gap <= line; gap++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
	continue;
	}
	_pucthar('\n');
	}
	}
	_putchar('\n');
}
