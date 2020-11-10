#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_functions - structured data to match a string with a function
 * @c: string to match with a function
 * @func: pointer to a function that gets a va_list type argument and casts it
 */

typedef struct print_functions
{
	char *c;
	int (*func)();
} print_functions;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADICS_H */
