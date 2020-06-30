#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 * @s: pointer to the string
 *Return: changes string
 */

char *leet(char *s)
{
	int i, j;
	char *low = "aeotl";
	char *upper = "AEOTL";
	char *r = "43071";

	for (i = 0; *(s + i); i++)
	{
		j = 0;
		for (j = 0; low[j]; j++)
		{
			if (*(s + i) == low[j] || *(s + i) == upper[j])
			{
				*(s + i) = r[j];
			}
		}
	}
	return (s);
}
