#include "variadic_functions.h"

/**
 * sum_them_all - sums all integers passed by argument
 * @n: number of integers passed
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	int i = 0;
	double sum = 0.0;

	if (n == 0)
		return (0);

	va_start(num_list, n);

	for (; i < n; i++)
		sum += va_arg(num_list, int);

	va_end(num_list);

	return (sum);
}
