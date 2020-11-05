#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node whitin a list at a given index.
 * @head: pointer to a pointer towards the first node of the list.
 * @index: position of the node to delete.
 * Return: 1 if succedded, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *current, *next;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	current = *head;
	while (current)
	{
		if (nodes == index - 1)
		{
			next = current->next;
			current->next = next->next;
			free(next);
			return (1);
		}
		current = current->next;
		nodes++;
	}
	return (-1);
}
