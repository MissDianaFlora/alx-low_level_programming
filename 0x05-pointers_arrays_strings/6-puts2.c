#include "main.h"

/**
 * puts2 - prints every charactter of a string
 * start with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
