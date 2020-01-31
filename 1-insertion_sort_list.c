#include "sort.h"

/**
 * insertion_sort_list - function that sorts a list one at a time
 * @list: doubly linked list
 * Description: 1. Insertion sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;
//	listint_t *head = NULL;

	if ((*list != NULL) && ((*list)->next != NULL))
	{
		current = (*list)->next;
		while (current->next)
		{
			if ((current->n) < (current->prev->n))
			{
				temp = current->prev;
				current->next->prev = temp;
				temp->next = current->next;
				if (temp->prev)
				{
					temp->prev->next = current;
				}
				current->next = temp;
				current->prev = temp->prev;
				temp->prev = current;
				print_list(*list);
			}
			current = current->next;
		}
	}
}
