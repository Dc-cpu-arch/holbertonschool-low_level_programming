#include "holberton.h"

/**
 * _strdup - allocates memory space for a string given as a parameter
 * @str: string to duplicate
 * Return: a pointer to the duplicated string if success, otherwise NULL
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[b])
		b++;

	c = malloc((sizeof(char) * b) + 1);
	if (c == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		c[a] = str[a];
	c[a] = '\0';
	return (c);
}
