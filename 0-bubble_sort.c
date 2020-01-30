#include "sort.h"

void print_array(const int *array, size_t size);

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order
 * @array: array of integers
 * @size: size of array
 * Description: 0. Bubble sort
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
    /**
     * 1. declared elmt1 to iterate through array
     * 2. declared elmt2 to compare the last element
     * 3. declared temp to swap elements
     */
    size_t elmt1 = 0;
    size_t elmt2 = 0;
    size_t swap;

    /**
     * 1. if size is greater than 2, then do bubble sort
     * 2. iterate through array for the element
     * 3. iterate through array for the adjacent element
     * 4. if element is greater than the adjacent, then swap
     * 5. last iteration checks the sorted order
     */
    if (size > 2)
    {
        for (; elmt1 < (size - 1); elmt1++)
        {
            for (; elmt2 < (size - elmt1 - 1); elmt2++)
            {
                if (array[elmt2] > array[elmt2 + 1])
                {
                    swap = array[elmt2];
                    array[elmt2] = array[elmt2 + 1];
                    array[elmt2 + 1] = swap;
                    print_array(array, size);
                }
                print_array(array, size);
            }
            print_array(array, size);
        }
    }
}
