#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combination of 2 digits
 *
 * The numbers should range from 0 to 99
 *
 * The two numbers should be separated by a space
 *
 * All numbers should be printed with two digits
 *
 * The combination of numbers must be separated by , space
 *
 * The combinations of numbers should be printed in ascending order
 *
 * 00 01 and 01 00 are considered as the same combination of the numbers
 *
 *Return: Always 0 (Success0
 *
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			l_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;

	}
	putchar('\n');
	return (0);
}
