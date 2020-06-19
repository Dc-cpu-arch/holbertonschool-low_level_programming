#include "holberton.h"

/**
 *print_diagonal - prints backslashes
 *@n: number of \ printed
 */

void print_diagonal(int n)
{
	int b = 0, s;

	while (b < n)
	{
		if (n > 0)
		{
			s = 0;
			while (s < b)
			{
				_putchar(' ');
				s++;
			}
			_putchar(92);
			_putchar('\n');
		}

		b++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
