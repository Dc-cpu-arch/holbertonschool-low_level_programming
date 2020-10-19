#include "holberton.h"

/**
 * create_array - allocates memory to print an array of a char
 * @size: times the character will be printed
 * @c: character to print, only one
 * Return: a pointer to the created array, otherwise NULL and fail process
 */

char *create_array(unsigned int size, char c)
{
	int i = 0; /* iterator*/
	char *allocated_memory_to_array = NULL; /* pointer to future array */

	if (size == 0)
		return (NULL);

	allocated_memory_to_array = malloc(sizeof(char) * size); /* memalloc */

	if (p == NULL)
		return (NULL);

	for (; i <= size - 1; i++)
		*(allocated_memory_to_array + i) = c; /* dereferencing */

	allocated_memory_to_array[i++] = '\0'; /*covering the null char	ending*/

	return (allocated_memory_to_array); /* success return */
}
