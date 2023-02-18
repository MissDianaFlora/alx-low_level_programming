#include <stdio.h>

/**
 * main - Print the alphabets in lower then upper
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	printf("print the letters in upper case followed by lower case");
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar ('\n');
		getch();
	return (0);
}
