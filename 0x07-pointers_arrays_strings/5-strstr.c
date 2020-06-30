#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: character string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	do {
		a = haystack;
		b = needle;
		do {
			if (!*b)
				return (haystack);
			if (!*a)
				return (NULL);
		} while (*a++ == *b++);
	} while (*(++haystack));
	return (NULL);
}
