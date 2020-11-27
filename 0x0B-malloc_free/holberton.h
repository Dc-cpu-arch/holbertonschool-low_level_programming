#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

void simple_print_buffer(char *buffer, unsigned int size);

void print_grid(int **grid, int width, int height);

char **strtow(char *str);

#endif /* _HOLBERTON_H_ */
