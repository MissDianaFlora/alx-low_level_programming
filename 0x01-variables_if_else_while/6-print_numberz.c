#include <stdio.h>

/**
 * main - Print all letters except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch  = 0;

	while (ch < 10)
	{
		putchar(48 + ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
