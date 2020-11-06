#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a decimal number.
 * @index: the bit requested to set to 0.
 * Return: 1 if succeeded, otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);

	idx = ~(1 << index);
	*n = *n & idx;
	return (1);
}
