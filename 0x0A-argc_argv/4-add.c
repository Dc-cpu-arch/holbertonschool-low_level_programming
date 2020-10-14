#include "holberton.h"

/**
 * main - adds any amount of positive numbers
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: 0 if succeed, otherwise 1
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int count1, count2;

	if (argc > 1)
	{
		for (count1 = 1; count1 < argc; count1++)
		{
			for (count2 = 0; argv[count1][count2]; count2++)
	{
				if (!isdigit(argv[count1][count2]))
				{
					puts("Error");
					return (1);
				}
	}
			 result = result + atoi(argv[count1]);

		}

	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", result);
	return (0);
}
