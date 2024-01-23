#include "sort.h"

/**
 * swap - Swaps two values.
 * @first: The first integer.
 * @second: The second integer.
 * Return: void.
*/
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * get_min_index - Gets the index of the minimum value in a sub-array.
 * @array: The array to sort.
 * @start: The starting index of the sub-array.
 * @size: The size of the array.
 * Return: The index of the minimum value.
*/
size_t get_min_index(int *array, size_t start, size_t size)
{
	size_t i, min_index;
	int min_value;

	min_value = array[start];
	min_index = start;

	for (i = start + 1; i < size; i++)
	{
		if (array[i] < min_value)
		{
			min_value = array[i];
			min_index = i;
		}
	}

	return (min_index);
}

/**
 * selection_sort - Sorts an array using the selection sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 * Return: void.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, min_index;

	for (i = 0; i < size; i++)
	{
		min_index = get_min_index(array, i, size);

		if (i != min_index)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
