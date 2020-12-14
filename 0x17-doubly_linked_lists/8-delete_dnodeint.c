#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position of a DDL
 * @head: first node
 * @index: position of the node to be erased
 *
 * Return: 1 if succeed, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *node;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	
	current = *head;

	if(index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	else if (index == 0)
	{
		*head = current->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	node = current->next->next;
	free(current->next);
	current->next = node;

	if (current->next)
		current->next->prev = current;

	return (1);
}
