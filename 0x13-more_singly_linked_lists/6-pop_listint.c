#include "lists.h"

/**
 * pop_listint - deletes the head node of a list, returning its data.
 * @head: pointer to a pointer towards the first node of the list.
 * Return: main member of the node-structure.
 */
int pop_listint(listint_t **head)
{
	int number = 0;
	listint_t *new;

	if (*head == NULL)
		return (0);

	number = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (number);
}
