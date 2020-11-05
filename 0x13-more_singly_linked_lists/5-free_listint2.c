#include "lists.h"

/**
 * free_listint2 - frees a single linked list, setting the head to NULL.
 * @head: pointer to the first node of the list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || (*head) == NULL)
	{
		return;
	}

	free_listint2(&((*head))->next);
	free(*head);
	*head = NULL;
}
