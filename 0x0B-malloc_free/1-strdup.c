#include "holberton.h"

/**
 * _strdup - allocates memory space for a string given as a parameter
 * @str: string to duplicate
 * Return: a pointer to the duplicated string if success, otherwise NULL
 */

char *_strdup(char *str)
{
	int a, b, lon;
	char *pointer_to_string = NULL;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		lon++;

	pointer_to_string = malloc(sizeof(char) * ++lon);

	if (pointer_to_string == NULL)
		return (NULL);

	for (b = 0; b <= lon - 1; b++)
		*(pointer_to_string + b) == str[b];

	return (pointer_to_string);
}
