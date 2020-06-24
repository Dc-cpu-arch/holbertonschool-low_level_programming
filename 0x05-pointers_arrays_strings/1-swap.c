#include "holberton.h"

/**
 *swap_int - Swaps two integers
 *@a: pointer with value 98
 *@b: pointer with value 42
 *Return: Null
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
