#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *Return: Always 0
 */

int main(void)
{
char lowercase;
lowercase = 48;
while (lowercase <= 102)
{
putchar(lowercase);
lowercase = lowercase + 1;
if (lowercase == 58)
lowercase = 97;
}
putchar ('\n');
return (0);
}
