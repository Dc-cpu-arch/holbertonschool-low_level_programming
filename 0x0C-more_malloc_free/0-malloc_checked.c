#include "holberton.h"

/**
 * malloc_checked - allocates memory
 * @b: does the same as size_t in the original malloc
 * Return: pointer with allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	pointer = malloc(b);

	if (!pointer)
		exit(98);

	return (pointer);
}

