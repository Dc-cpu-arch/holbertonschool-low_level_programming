#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a single linked list.
 * @head: pointer to pointer to the first node of the list, the head.
 * @str: main member of the node structure.
 * Return: a pointer towards the newly created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *first = *head;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = i;
	new->str = strdub(str);
	new->next = *head;

	*head = new;

	return (new);
}
