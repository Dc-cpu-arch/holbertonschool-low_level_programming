#include "holberton.h"

/**
 * main - main function.
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long fac;

	for (fac = 2; num > fac; fac++)
	{
		while (num % fac == 0)
		{
			num = num / fac;
		}
	}
	printf("%ld\n", fac);

	return (0);
}
