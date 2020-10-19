#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimun amount of integers
 * @max: maximun amount of integers
 * Return: a pointer to the array, otherwise NULL
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int *temp;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	temp = p;

	if (!p)
		return (NULL);

	while (min <= max)
		*p++ = min++;

	return (temp);
}
