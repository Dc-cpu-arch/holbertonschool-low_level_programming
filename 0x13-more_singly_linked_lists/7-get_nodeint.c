#include "lists.h"

/**
 * get_nodeint_at_index - function that returns only a given node from a list.
 * @head: pointer to the first node of the list.
 * @index: asked position of the node.
 * Return: pointer to the requested node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (nodes == index)
		{
			return (head);
		}
		head = head->next;
		nodes++;
	}
	return (NULL);
}
