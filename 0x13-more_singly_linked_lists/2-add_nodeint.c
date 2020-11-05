#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to a pointer to the first node of the list.
 * @n: main member of the node-structure.
 * Return: pointer to the newly created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;
	return (new);
}
