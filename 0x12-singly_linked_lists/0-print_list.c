#include "lists.h"

/**
 * print_list -  prints the members of the nodes of a list and count them.
 * @h: pointer to the first node of the list.
 * Return: amount of nodes whitin the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	list_t *list;

	list = (list_t *)h; /*exchanging values to do the iteration*/

	for (nodes = 0; list != NULL; nodes++)
	{
		if (list->str == NULL) /*if there's no 1st member*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", list->len, list->str);
			/*printing both members*/
		}

		list = list->next; /*giving pointer to the next node*/
	}
	return (nodes);
}
