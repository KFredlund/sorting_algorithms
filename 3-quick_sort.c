#include "sort.h"
#include <stdio.h>
void swap(int *a, int *b);
void quick_sort_helper(int array[], int l, int r, size_t size);
int partition(int array[], int l, int r, size_t size);
/**
* quick_sort - A function that sorts an array of ints in
* ascending order
* @array: array pointer
* @size: size of array being sorted
*
* Return: Never
*/
void quick_sort(int *array, size_t size)
{
	size_t r = size - 1;

	quick_sort_helper(array, 0, r, size);
}
/**
* swap - function that swaps two values
* @a: first value
* @b: second value
*
* Return: Never
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
* partition - function that partitions the array
* @array: array to be partitioned
* @r: right side
* @l: left side
* @size: size of array
*
* Return: partioned array
*/
int partition(int array[], int l, int r, size_t size)
{
	int i = l;
	int j;
	int V = array[r];

	for (j = l; j < r; j++)
	{
		if (array[j] <= V)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		swap(&array[i], &array[j]);/* Set the pivot */
		print_array(array, size);
	}
	return (i);
}
/**
* quick_sort_helper - function that helps quick and indexes the partition
* @array: partioned array
* @l: left side
* @r: right side
* @size: size of array
*
* Return: Never
*/
void quick_sort_helper(int array[], int l, int r, size_t size)
{
	int mid;

	if (l < r)
	{
		mid = partition(array, l, r, size);
		quick_sort_helper(array, l, mid - 1, size);
		quick_sort_helper(array, mid + 1, r, size);
	}
}
