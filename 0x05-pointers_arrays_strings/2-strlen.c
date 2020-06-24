#include "holberton.h"

/**
 *_strlen - counts the length of given string.
 *@s: Pointer addressing to the string.
 *Return: string's length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);
}
