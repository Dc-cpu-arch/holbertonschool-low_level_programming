#include "holberton.h"

/**
 *_isalpha - returns 1 if there are letters
 *@c: alphabet lower and upper
 *Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
