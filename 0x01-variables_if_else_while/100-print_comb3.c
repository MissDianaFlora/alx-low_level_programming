#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combination of two digits
 *
 * Numbers must be separated by ,, followed by a space
 *
 * The two digits must be different
 *
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 *
 * Print only the smallest combination of two digits
 *
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int j = 0;

	while (j < 10)
	{
		x = 0;
		while (x < 10)
		{
		if (j != x && j < x)
		{
			putchar('0' + j);
			putchar('0' + x);

			if (x + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	j++;
	}
	putchar('\n');
	return (0);
}

