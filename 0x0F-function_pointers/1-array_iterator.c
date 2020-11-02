#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on all the array.
 * @array: array of numbers.
 * @size: amount of numbers whitin the array.
 * @action: pointer to functions.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array && !size && !action)
	return;

	for (; i < size; i++)
	{
	action(array[i]);
	}

}
