#include "holberton.h"

/**
 *print_triangle - prints a triangle
 *@size: triangle area
 */

void print_triangle(int size)
{
	int i = 0, j = 0;

	if (size < 0)

		putchar('\n');

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
		(j >= (size - 1 - i)) ? _putchar(35) : _putchar(' ');
		j++;
		}
		_putchar('\n');
		i++;
	}
}
