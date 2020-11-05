#include "lists.h"

/**
 * free_listint - frees a single linked list
 * @head: pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
