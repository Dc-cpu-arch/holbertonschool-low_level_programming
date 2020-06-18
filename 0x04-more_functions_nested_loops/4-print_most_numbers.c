#include "holberton.h"

/**
 *print_most_numbers - print numbers ommiting 2 && 4
 */

void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n == '2' || n == '4')
			n++;
		_putchar(n);
		n = n + 1;
	}
	_putchar('\n');
}
