#include "lists.h"

/**
 * list_len - counts the amount of nodes whitin a list.
 * @h: pointer to the head of the list.
 * Return: amount of nodes whitin the given list
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	list_t *list;

	list = (list_t *)h;

	for (nodes = 0; list != NULL; nodes++)
	{
		list = list->next; /*Going to the next node*/
	}
	return (nodes);
}
