#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal.
 * @index: the requested bit to get.
 * Return: the requested bit, or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx, and;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);

	idx = 1 << index;

	and = n & idx;

	if (idx == and)
		return (1);

	return (0);
}
