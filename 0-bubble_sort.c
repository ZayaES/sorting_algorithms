#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: input array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	i = 1;
	j = 1;
	while (i < size)
	{
		if (array[i] < array[i - 1])
		{
			swap(&array[i], &array[i - 1]);
			print_array(array, size);
		}
		i++;
	}
	while (array[j] > array[j - 1])
	{
		j++;
		if (j > size - 1)
			return;
	}
		bubble_sort(array, size);
}

/**
 * swap - swaps the storage(array, variable, etc) of two numbers
 * @a: 1st number address
 * @b: 2nd number address
 */

void swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
