#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order
 * @array: array of integers
 * @size: size of array
 * Description: 0. Bubble sort
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
    /**
     * 1. declared variables to iterate through array
     * 2. declared swap variable to switch elements
     */
	size_t i, j;
	int swap;

    /**
     * 1. iterate through array for the element
     * 2. iterate through array for the adjacent element
     * 3. if element is greater than the adjacent, then swap
     * 4. last iteration checks the sorted order
     */
	if ((array != NULL) && (size >= 2))
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < (size - i - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
					print_array(array, size);
				}
			}
		}
	}
}
