#include <stdio.h>

/**
 * main - Print the alphabets in lower then upper
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
