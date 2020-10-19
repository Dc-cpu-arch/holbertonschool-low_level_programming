#include "holberton.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: array of elements to be allocated
 * @size: bytes to each element
 * Return: a pointer to the allocated memory, otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer_called = NULL;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	pointer_called = malloc(size * nmemb);

	if (!pointer_called)
		return (NULL);

	for (; i < (nmemb * size); i++)
		*(pointer_called + i) = 0;

	return (pointer_called);
}
