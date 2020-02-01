#include "sort.h"

/**
 * shell_sort - function that sorts an array using the Knuth Sequence
 * @array: array of integers
 * @size: size of array
 * Description: 4. Shell sort - Knuth Sequence
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	/**
	 * 1. declare variables to create gap sequences
	 * 2. declare elmt variable for insertion
	 */
	size_t gap = 1;
	size_t right, left;
	int elmt;

	/**
	 * 1. Create gap sequence using Knuth's h = 3h + 1
	 * 2. Swap within each interval created by the gaps
	 * 3. Recalculate gap to decrease the intervals
	 */
	if (size > 2)
	{
		while (gap < (size / 3))
		{
			gap = (gap * 3) + 1;
		}
		while (gap > 0)
		{
			right = gap;
			while (right < size)
			{
				elmt = array[right];
				left = right;
				while ((left > (gap - 1)) && (array[left - gap] >= elmt))
				{
					array[left] = array[left - gap];
					left = left - gap;
				}
				right++;
				array[left] = elmt;
			}
			gap = (gap - 1) / 3;
			print_array(array, size);
		}
	}
}
