#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string with the chars of the name
 * @f: pointer to the function that prints the given name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) && !(f))
	return;

	(*f)(name);
}
