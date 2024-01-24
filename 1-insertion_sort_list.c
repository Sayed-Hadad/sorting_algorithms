#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                                                                    order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current; /* Declaration must come first */

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{

		return;
	}

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *key = current;
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > key->n)
		{

			if (key->next != NULL)
				key->next->prev = prev;

			if (prev->prev != NULL)
				prev->prev->next = key;
			else
				*list = key;

			prev->next = key->next;
			key->prev = prev->prev;
			key->next = prev;
			prev->prev = key;


			print_list(*list);
			prev = key->prev;
		}

		current = current->next;
	}
}
