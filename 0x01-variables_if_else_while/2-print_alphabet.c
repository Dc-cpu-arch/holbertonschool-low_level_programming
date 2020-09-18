#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *1
 *Return:  Always 0
 *
 */

int main(void)
{
	char a = 97;

	for (; a <= 122; a++)
	{
	putchar(a);
	}
	putchar('\n');

	return (0);
}
