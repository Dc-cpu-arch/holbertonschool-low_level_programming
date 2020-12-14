#include "lists.h"

/**
 * dlistint_len - returns the lenght of a DDL
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int count = 0;

	if (!h)
		return (count);

	else
	{
		while (node)
		{
			node = node->next;
			count++;
		}
	}
	return (count);
}
