#include "holberton.h"

/**
 * get_endianness - checks the endianess.
 * Return: endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	return (*(char *)(&n) == 1);
}
