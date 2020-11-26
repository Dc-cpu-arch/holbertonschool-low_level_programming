#include <stdio.h>

/**
 * main - prints all possible combinations between two numbers.
 * Return: allways 0.
 */
int main(void)
{
	int i = '0';
	int o;

	while (i <= '9')
	{
		for (o = '0'; o <= '9'; o++)
		{
			if (i < o)
			{
				putchar(i);
				putchar(o);

				if (i != '8' || f != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
