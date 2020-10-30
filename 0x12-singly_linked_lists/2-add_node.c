#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a single linked list.
 * @head: pointer to pointer to the first node of the list, the head.
 * @str: main member of the node structure.
 * Return: a pointer towards the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	new->len = i; /*1st member of the node structure*/
	new->str = strdup(str);/*2nd member of the node structure*/
	new->next = *head;/*3rd member of the node structure*/
	/*The list is created from the bottom up*/
	*head = new;

	return (new);
}
