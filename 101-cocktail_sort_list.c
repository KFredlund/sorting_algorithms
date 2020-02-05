#include "sort.h"

/**
 * cocktail_sort_list - function that sorts a list one at a time
 * @list: doubly linked list
 * Description: 5. Cocktail shaker sort
 * Return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current, *compare;

	if ((list != NULL) && (*list != NULL) && ((*list)->next != NULL))
	{
		current = (*list)->next;
		while (current)
		{
			compare = current->prev;
			while (compare->n > current->n)
			{
				helper_swap(current, compare);
				current = current->next;
				if (current->prev == NULL)
				{
					*list = current;
				}
				if (current->next == NULL)
				{
					compare = current->prev;
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
 * @compare: pointer to the left node for comparison
 * Return: nothing
 */
void helper_swap(listint_t *current, listint_t *compare)
{
	listint_t *right;
	listint_t *left;

	right = current->next;
	left = compare->prev;
	if (right)
	{
		right->prev = compare;
	}
	compare->next = right;
	if (left)
	{
		left->next = current;
	}
	current->next = compare;
	current->prev = left;
	compare->prev = current;
}
