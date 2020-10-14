#include "holberton.h"

/**
 * main - multiplies only two numbers, any other quantity of arguments is not
 * passed
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: 0 if succeed, otherwise 1
 */

int main(int argc, char *argv[])
{
	int m1, m2;

	if (argc == 1 || argc == 2 || argc > 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
		return (0);
	}
}
