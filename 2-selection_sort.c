#include "sort.h"

/**
 *swap - Swaps two integers.
 *@a: Pointer to the first integer.
 *@b: Pointer to the second integer.
 *
 *Description: This function swaps the values of the two integers
 *pointed to by @a and @b.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *selection_sort - Sorts an array of integers in ascending order
 *                 using the Selection sort algorithm.
 *@array: The array to be sorted.
 *@size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			swap(&array[i], &array[minIndex]);
			print_array(array, size);
		}
	}
}
