#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

char **strtow(char *str);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* _HOLBERTON_H_ */
