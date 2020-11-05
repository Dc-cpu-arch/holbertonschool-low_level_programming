#include "lists.h"

/**
 * reverse_listint - reverses a single linked list.
 * @head: pointer to the first node whitin the list.
 * Return: pointer to the first node after the reverse.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = *head, *current;

	if (!head || !(*head))
		return (NULL);

	current = (*head)->next;
	*head = (*head)->next;
	reverse->next = NULL;
	while (*head)
	{
		*head = (*head)->next;
		current->next = reverse;
		reverse = current;
		current = (*head);
	}
	*head = reverse;
	return (reverse);
}
