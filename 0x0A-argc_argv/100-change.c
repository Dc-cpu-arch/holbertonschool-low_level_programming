#include "holberton.h"

/**
 * change_cents - prints the minimun number of coins to make change.
 * @argc: amount of arguments passed, only the program's name and one value.
 * @argv: array of two index.
 * Return: 1 if failed, 0 otherwise.
 */

int change_cents(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int coins_num = 0, i = 0;

	if (argc == 2)
	{
		int e = atoi(argv[1]);

		for (; i < 5; i++)
		{
			for(; e - coins[i] >= 0; coins_num++)
			{
				e -= coins[i];
			}
		}
		printf("%d\n", coins_num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
