#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a DDL
 * @head: first node
 * @n: data
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current)
	{
		while (current->next)
		{
			current = current->next;
		}
		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	return (new_node);
}
