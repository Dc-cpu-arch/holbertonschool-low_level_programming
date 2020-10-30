#include "lists.h"

/**
 * print_list - prints the members of the nodes of a list and counts them.
 * @h: pointer to the first node of the list.
 * Return: amount of nodes whitin the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%i] %s\n", h->len, h->str);

	h = h->next;
	}
	return (nodes);
}
