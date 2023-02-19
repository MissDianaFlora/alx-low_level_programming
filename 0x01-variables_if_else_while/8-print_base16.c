#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print single digits of base 16 in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '15'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'a'; ch <= 'o'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
