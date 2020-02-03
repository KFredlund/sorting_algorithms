#include "sort.h"

/**
 * insertion_sort_list - function that sorts a list one at a time
 * @list: doubly linked list
 * Description: 1. Insertion sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	if ((*list != NULL) && (*list != NULL) && ((*list)->next != NULL))
	{
		current = (*list)->next;
		while (current)
		{
			temp = current->prev;
			while ((temp != NULL) && ((current->n) < (temp->n)))
			{
				helper_swap(current, temp);
				temp = current->prev;
				if (current->prev == NULL)
				{
					*list = current;
				}
				print_list(*list);
			}
			current = current->next;
		}
	}
}

/**
 * helper_swap - function that swaps nodes of a list
 * @current: pointer to the right node for comparison
 * @temp: pointer to the left node for comparison
 * Return: nothing
 */
void helper_swap(listint_t *current, listint_t *temp)
{
	listint_t *right;
	listint_t *left;

	right = current->next;
	left = temp->prev;
	if (right)
	{
		right->prev = temp;
	}
	temp->next = right;
	if (left)
	{
		left->next = current;
	}
	current->next = temp;
	current->prev = left;
	temp->prev = current;
}
