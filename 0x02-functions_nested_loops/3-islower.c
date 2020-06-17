#include "holberton.h"

/**
 *_islower - checks for lower case
 *
 *@c: character
 *
 *Return: Always 0 - ok
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
