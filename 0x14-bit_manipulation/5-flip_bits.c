#include "holberton.h"

/**
 * flip_bits - returns the number of bits that would be modified to change.
 * the (n) argument to the (m) argument.
 * @n: first decimal number.
 * @m: second decimal number.
 * Return: bites that would be changed to become n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int counter;

	counter = n ^ m;

	while (counter)
	{
		i += counter & 1;
		counter = counter >> 1;
	}
	return (i);
}
