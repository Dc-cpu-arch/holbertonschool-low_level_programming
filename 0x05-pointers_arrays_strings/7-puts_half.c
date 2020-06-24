#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: string with 10 numbers (0 to 9).
 * Return: Null.
 */

void puts_half(char *str)
{
	int n, i;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}

	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
