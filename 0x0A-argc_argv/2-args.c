#include "holberton.h"

/**
 * main - Prints all the pased arguments, each one followed by a new line
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int co;

	for (co = 0; co < argc; co++)
	{
		printf("%s\n", argv[co]);
	}

	return (0);

}
