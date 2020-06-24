#include "holberton.h"

/**
 *_puts - prints a string.
 *@str: pointer with the even string.
 *Return: none.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
