#include "holberton.h"

/**
 *print_rev - prints a string in backward order.
 *@s: pointer with the string.
 *Return: Null.
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++);

       	for (j -= 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}

	_putchar(10);
}
