#include "lists.h"

/**
 * sum_dlistint - sums the data from all the nodes of a DDL
 * @head: first node
 *
 * Return: result of the operation, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
