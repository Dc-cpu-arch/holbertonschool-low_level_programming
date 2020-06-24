#include "holberton.h"

/**
 *print_rev - prints a string in backward order.
 *@s: pointer with the string.
 *Return: Null.
 */

void print_rev(char *s)
{
	int CS = 0;

	while (s[CS])
	{
		CS++;
	}

	CS--;

	for (; CS >= 0; CS --)
	{
		_putchar(s[CS]);
	}

	_putchar('\n');
}
