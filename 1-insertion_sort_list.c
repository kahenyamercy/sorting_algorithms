#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of integers in ascending
 *                       using Insertion algorithm.
 *
 * @list: Pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current, *prev, *temp;

	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		temp = current;

		while (prev != NULL && prev->n > temp->n)
		{
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev;

			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;

			prev->prev = temp;
			prev = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
