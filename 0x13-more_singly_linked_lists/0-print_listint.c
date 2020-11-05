#include "lists.h"

/**
 * print_listint - prints all the members of a list of integers.
 * @h: pointer to the first node of the list.
 * Return: number of nodes whitin the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	nodes += print_listint(h->next);
	return (nodes);
}
