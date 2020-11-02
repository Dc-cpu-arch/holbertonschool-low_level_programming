#include "holberton.h"

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously reallocated with a malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: the new size for the new memory block.
 * Return: the pointer with the new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldptr = ptr, *new;
	unsigned int i;

	if (new_size == old_size)
		return (oldptr);

	if (oldptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = oldptr[i];
	free(ptr);
	return (new);
}
