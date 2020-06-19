#include <stdio.h>

/**
 *main - prints numbers from 1 to 100 and add FizzBuzz
 *to special ones (3 and 5 multiples)
 *Return: 0
 */

int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else if (i == 100)
		{
			printf(" Buzz");
			putchar('\n');
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
