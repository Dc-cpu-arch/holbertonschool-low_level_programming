#include "lists.h"

/**
 * free_list - frees the space used to allocate the members of every node
 *             inside a single linked list.
 * @head: pointer to the first member of the list.
 */
void free_list(list_t *head)
{
	if (!head) /*there's no given arguments*/
		return;

	if (head->next) /*there's a next node whitin the list*/
	{
		free_list(head->next); /*Recursion till the null node*/
	}

	free(head->str); /*freeing the space allocated to every string*/
	free(head);/*freeing the pointers*/
}
