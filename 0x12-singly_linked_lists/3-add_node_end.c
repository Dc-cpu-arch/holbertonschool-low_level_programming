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
	list_t *prev = *head;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (prev->next != NULL) /*While there's a next node*/
		{
			prev = prev->next;/*go to the next node*/
		}
		prev->next = new; /*change pointer to the current node*/
	}

	return (new);
}
