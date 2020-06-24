#include "holberton.h"

/**
 *print_rev - prints a string in backward order.
 *@s: pointer with the string.
 *Return: Null.
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[CS]);
	}

	_putchar('\n');
}
