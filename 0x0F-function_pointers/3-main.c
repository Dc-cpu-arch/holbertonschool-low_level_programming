#include "header.h"

/**
 * main - this is a basic calculator
 * @argc: int number of the quantity of arguments
 * @argv: string array with the arguments
 *
 * Return: 98 if the number of args is wrong, if the operator is wrong 99,
 *		if the user tries to divide (7 or %) by 0, then 100.
 */

int main(int argc, char **argv)
{
	int (*func)(int, int);
	int num1, num2;
	char *oper;
	char check[3] = "/%";
	int result;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = argv[2];

	if ((oper[0] == check[0] || oper[0] == check[1]) && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	func = get_op_func(oper);
	/*Calling the function whiout givin its definition*/

	if (func == NULL) /*Operator is not founded*/
	{
		puts("Error");
		exit(99);
	}

	result = func(num1, num2);

	printf("%d\n", result);

	return (EXIT_SUCCESS);
}
