#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char string
 * @accept: characters
 * Return: unsifned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *a;

	for (i = 0; s[i]; i++)
	{
		for (a = accept; *a; a++)
		{
			if (s[i] == *a)
			break;
		}
		if (!*a)
		break;
	}
	return (i);
}
