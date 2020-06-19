#include "holberton.h"

/**
 *more_numbers - prints numbers from 0 to 14
 *Return: no return
 */

void more_numbers(void)
{
	int z, n;

	for (z = 0; z <= 9; z++)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}

		_putchar('\n');
	}

}
