#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *Return: Always 0
 */

int main(void)
{
char lower;
char upper;
lower = 'a';
upper = 'A';
while (lower <= 'z')
{
putchar (lower);
lower++;
}
upper = 'A';
while (upper <= 'Z')
{
putchar (upper);
upper++;
}
putchar ('\n');
return (0);
}
