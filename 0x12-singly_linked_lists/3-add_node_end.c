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

	for (i = 0; *(str + i) != '\0'; i++)/*iterating the string*/

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = i;
	new->str = strdub(str);
	new->next = *head; /*pointer to the next node of the list*/
	/*list is created from the top down*/
	*head = new;

	return (new);
}
