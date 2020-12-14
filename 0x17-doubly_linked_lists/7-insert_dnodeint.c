#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position of a DDL
 * @h: first node
 * @idx: new node position
 * @n: data
 *
 * Return: address of the new node, of NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current)
	{
		if (i == idx - 1 && current->next != NULL)
		{
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
		}
		else if (i == idx - 1 && current->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		current = current->next;
		i++;
	}
	if (idx > i)
		return (NULL);

	return (new_node);
}
