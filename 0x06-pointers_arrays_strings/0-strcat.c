#include "holberton.h"

/**
 *  *_strcat - concatenates two strings.
 *@src: source variable
 *@dest: destination (second string) variable.
 *Return: destination variable.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int r = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[r])
	{
		dest[i] = src[r];

		i++;
		r++;
	}
	dest[i] = '\0';

	return (dest);
}
