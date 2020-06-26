#include "holberton.h"

/**
 * _strcmp - compares two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: negative, posivie or zero integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 > * s2 ? 1 : -1);
	}
}
