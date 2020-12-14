#include "lists.h"

/**
 * free_dlistint - frees a DDL
 * @head: first node
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *backup = NULL;

	while (current)
	{
		backup = current;
		current = current->next;
		free(backup);
	}
}
