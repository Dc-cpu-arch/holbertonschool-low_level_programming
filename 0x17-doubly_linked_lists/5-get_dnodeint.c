#include "lists.h"

/**
 * get_dnodeint_at_index - fetches a node in a DDL and returns its data
 * @head: first node
 * @index: nth node to be fetched
 *
 * Return: data -if node exists-, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (index > 0)
	{
		current = current->next;
		index--;
		if (!current)
			return (NULL);
	}
	return (current);
}
