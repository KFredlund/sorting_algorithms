#include "sort.h"

/**
 * selection_sort - function that sorts an array in-place
 * @array: array of integers
 * @size: size of array
 * Description: 2. Selection sort
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	/**
	 * 1. declared elmt1 to iterate through array
	 * 2. declared elmt2 for comparison
	 * 3. declared swap to switch the elements
	 * 4. declared least to be the first element for comparing
	 */
	size_t elmt1;
	size_t elmt2;
	size_t swap;
	size_t least;

	/**
	 * 1. if size is greater than 2, then do selection sort
	 * 2. iterate through array for the element
	 * 3. iterate through array for the next element
	 * 4. compare the first element to the next element
	 * 5. if the next element is smaller, then it's the new least
	 * 6. if the elements aren't equal, swap them
	 */
	if (size > 2)
	{
		for (elmt1 = 0; elmt1 < (size - 1); elmt1++)
		{
			least = elmt1;
			for (elmt2 = (elmt1 + 1); elmt2 < size; elmt2++)
			{
				if (array[elmt2] < array[least])
				{
					least = elmt2;
				}
			}
			if (least != elmt1)
			{
				swap = array[elmt1];
				array[elmt1] = array[least];
				array[least] = swap;
				print_array(array, size);
			}
		}
	}
}
