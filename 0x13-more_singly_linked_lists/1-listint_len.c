#include "lists.h"

/**
 * listint_len - prints all the members og a linked list of integers.
 * @h: pointer to the first node of the list.
 * Return: number of nodes whitin the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	nodes = nodes + listint_len(h->next);

	return (nodes);
}
