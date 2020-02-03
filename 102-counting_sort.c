#include "sort.h"
#include <stdio.h>
/**
* counting_sort - A function that sorts an array of ints
* @array: array ot be sorted
* @size: size of the array
*
* Return: Never
*/
void counting_sort(int *array, size_t size)
{
	size_t i;
	int *count_arr = NULL, *new_arr = NULL;


	count_arr = malloc(sizeof(int) * size);
	if (count_arr == NULL)
		count_arr = 0;
	new_arr = malloc(sizeof(int) * size);
	if (new_arr == NULL)
		new_arr = 0;
	for (i = 0; array[i]; i++)
	{
		++count_arr[array[i]]; /*Store count of each int */
	}
	for (i = 1; i <= size; i++)
	{
		count_arr[i] += count_arr[i - 1];/*Adjust i for new array*/
	}
	for (i = 0; array[i]; i++)
	{
		new_arr[count_arr[array[i]] - 1] = array[i]; /*build new arr*/
		--count_arr[array[i]];
		print_array(count_arr, size);
	}
	for (i = 0; array[i]; i++)
	{
		array[i] = new_arr[i]; /*Copy sorted ints from temp arr*/
		print_array(count_arr, size);
	}
}
