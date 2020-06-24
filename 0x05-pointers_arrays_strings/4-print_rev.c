#include "holberton.h"

/**
 *print_rev - prints a string in backward order.
 *@s: pointer with the string.
 *Return: Null.
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	j--;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar(10);
}
