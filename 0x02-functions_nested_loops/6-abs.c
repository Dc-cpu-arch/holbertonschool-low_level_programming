#include "holberton.h"

/**
 *_abs - computes absolute value of x number
 *@r: var
 *Return: absolute value
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
		return (r);
}
