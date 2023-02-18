#include <stdio.h>

/**
 * main - Print single digits of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
