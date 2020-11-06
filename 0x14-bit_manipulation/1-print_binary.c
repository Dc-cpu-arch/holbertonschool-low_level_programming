#include "holberton.h"

/**
 * reverse - prints an integer from L to R.
 * @n: integer.
 */
void reverse(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	reverse(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of an integer.
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	reverse(n);
}
