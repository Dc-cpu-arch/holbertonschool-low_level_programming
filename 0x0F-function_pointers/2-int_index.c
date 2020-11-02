#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers passed.
 * @size: amount of numbers whitin the array.
 * @cmp: pointer to a function.
 * Return: the number that is beeing searched. Or -1 if failed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array && !size && !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
