#include "holberton.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int.
 * @b: pointer to a 0 and 1 string of chars.
 * Return: the converted integer number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		n <<= 1;

		if (*b == '1')
			n += 1;
		else if (*b != '0')
			return (0);
		++b;
	}
	return (n);
}
