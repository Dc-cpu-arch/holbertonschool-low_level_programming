#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 ant a given index.
 * @n: decimal number.
 * @index: the requested bit to set to 1.
 * Return: 1 if succeeded, otherwise -1.
 */
int set_bit(unsigned long int *n, unsignd int index)
{
	unsigned int idx;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);

	idx = 1 << index;
	*n = *n | idx;
	return (1);
}
