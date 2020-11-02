#include "header.h"

/**
 * get_op_func - finds the correct pointer to function
 * @s: the string with the operator symbol
 *
 * Return: a pointer to the asked function
 */
int (*get_op_func(char *s)) (int, int)
{
	 op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	while (ops[i].op != NULL)
	{
		if ((ops[i].op)[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
