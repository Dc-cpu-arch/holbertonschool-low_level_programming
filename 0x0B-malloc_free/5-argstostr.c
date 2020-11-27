#include "holberton.h"

/**
 * argstostr - concatenates all the arguments passed to the program.
 * @ac: number of args passed.
 * @av: array of arguments.
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i = 0, j, l = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			l++;
			j++;
		}
		i++;
	}
	arr = malloc(l + ac + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[p] = av[i][j];
			p++;
		}
		arr[p] = '\n';
		p++;
	}
	arr[p] = '\0';
	return (arr);
}
