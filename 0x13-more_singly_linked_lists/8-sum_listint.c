#include "lists.h"

/**
 * sum_listint - returns the sum of all the members whitin the nodes of a list.
 * @head: pointer to the first node whitin the list.
 * Return: the sum of the n member of the node-structures.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	sum = head->n + sum_listint(head->next);

	return (sum);
}
