#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated strings, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *concat_pointer;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	concat_pointer = malloc((sizeof(*s1) * a) + (sizeof(*s2) * b) + 1);

	if (!concat_pointer)
	{
		return (NULL);
	}
	for (c = 0, d = 0; c <= (a + b + 1); c++)
	{
		if (c < a)
		{
			concat_pointer[c] = s1[c];
		}
		else
			concat_pointer[c] = s2[d++];
	}

	return (concat_pointer);

}
