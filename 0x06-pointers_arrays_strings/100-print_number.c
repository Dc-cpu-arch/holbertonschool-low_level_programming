#include "holberton.h"

/**
 * print_number - print a integer with putchar.
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0 && n > -2147483647)
	{
		_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar(2 + '0');
		_putchar(1 + '0');
		_putchar(4 + '0');
		_putchar(7 + '0');
		_putchar(4 + '0');
		_putchar(8 + '0');
		_putchar(3 + '0');
		_putchar(6 + '0');
		_putchar(4 + '0');
		_putchar(8 + '0');
	}
	if (n > -2147483647)
	{
		i = n / 10;
		if (i)
			print_number(i);
		_putchar((n % 10) + '0');
	}
}
