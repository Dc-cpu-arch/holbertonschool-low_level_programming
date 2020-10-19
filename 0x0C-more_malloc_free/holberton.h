#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

void simple_print_buffer(char *buffer, unsigned int size);

void simple_print_buffer(int *buffer, unsigned int size);

char **strtow(char *str);

#endif /* _HOLBERTON_H_ */
