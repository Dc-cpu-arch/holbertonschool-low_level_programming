#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - structure for nodes of a single linked list.
 * @str: first member of the structure, malloc'ed string.
 * @len: length of the string.
 * @next: pointer to the next node of the given list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

void print_after_main(void) __attribute__((constructor));/*advanced*/

#endif /* LISTS_H */
