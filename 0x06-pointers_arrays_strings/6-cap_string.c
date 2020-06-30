#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer to the string to capitalize
 * Return: capitalized words of the string
 */

char *cap_string(char *s)
{
	int i, j;
	char *signs = ", \t\n.;?\"(){}";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; signs[j]; j++)
		{
			if (*(s + i) == signs[j])
				if (((*(s + (i + 1))) >= 'a' &&
				     (*(s + (i + 1))) <= 'z'))
				*(s + (i + 1)) = *(s + (i + 1)) - 32;
		}
		if (i == 0)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}
