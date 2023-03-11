#include "main.h"

/**
 * _strcpy - copies and pastes string
 * @dest: destination to paste
 * @src: string to be copied
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
