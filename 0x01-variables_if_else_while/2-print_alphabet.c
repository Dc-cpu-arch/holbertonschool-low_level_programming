#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *1
 *Return:  Always 0
 *
 */

int main(void)
{
char a;
a = 'a';
while (a <= 'z')
{
putchar(a);
a = a + 1;
}
putchar('\n');
return (0);
}
