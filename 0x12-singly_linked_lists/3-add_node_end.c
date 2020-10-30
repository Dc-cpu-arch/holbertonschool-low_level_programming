#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: pointer to the head.
 * @str: value
 * Return: Always 0 (Success)
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
