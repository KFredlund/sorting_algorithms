#include "sort.h"
#include <stdio.h>
void swap(int *a, int *b);
void quick_sort_helper(int array[], int l, int r);
int partition(int array[], int l, int r);
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
	quick_sort_helper(array, 1, size);
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
*
* Return: partioned array
*/
int partition(int array[], int l, int r)
{
	int i = l - 1;
	int j;
	int V = array[r];

	for (j = l; j <= r - 1; j++)
	{
		if (array[j] <= V)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, 10);
		}
	}
	swap(&array[i], &array[r]);
	printf("B. OUTSIDE SWAP\n");
	print_array(array, 10);
	return (i + 1);
}
/**
* quick_sort_helper - function that helps quick and indexes the partition
* @array: partioned array
* @l: left side
* @r: right side
*
* Return: Never
*/
void quick_sort_helper(int array[], int l, int r)
{
	int V;

	if (l < r)
	{
		V = partition(array, l, r);
		quick_sort_helper(array, l, V - 1);
		quick_sort_helper(array, V + 1, r);
	}
}
