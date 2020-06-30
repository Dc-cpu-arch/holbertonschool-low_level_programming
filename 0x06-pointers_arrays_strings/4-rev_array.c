#include "holberton.h"

/**
 * reverse_array - reverses the content of an integer array
 *@a: pointer to integers
 *@n: number of elements of the array
 *Return: none
 */

void reverse_array(int *a, int n)
{
	int p = 0;
	int temp;

	n--;

	while (p < n)
	{
		temp = a[n];
		a[n] = a[p];
		a[p] = temp;

		p++;
		n--;
	}
}
