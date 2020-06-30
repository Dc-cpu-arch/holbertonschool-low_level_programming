#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: points to the string
 *Return: string in rot13
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
	}
	return (s);
}
