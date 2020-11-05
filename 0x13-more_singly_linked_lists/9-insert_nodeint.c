#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at a requested position.
 * @head: pointer to a pointer the first node whitin the list.
 * @idx: index of the node to add.
 * @n: data member to insert in the requested node-structure.
 * Return: pointer to the newly created node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	listint_t *current, *next, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current)
	{
		if (nodes == idx - 1)
		{
			next = current->next;
			current->next = new;
			new->next = next;
			return (new);
		}
		current = current->next;
		nodes++;
	}
	return (NULL);
}
