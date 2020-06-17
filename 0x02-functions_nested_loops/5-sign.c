#include "holberton.h"

/**
 *print_sign - prints 0 + or -
 *@n: main var
 *Return: 0 + or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
