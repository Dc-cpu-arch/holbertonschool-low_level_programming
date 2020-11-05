#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: first node of the list.
 * @n: main member of the node-structure.
 * Return: pointer towards the newly created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		prev = *head;
		while (prev->next != NULL)
		{
			prev = prev->next;
		}

		prev->next = new;
	}
	return (new);
}
