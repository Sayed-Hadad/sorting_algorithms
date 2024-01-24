#include "sort.h"

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of the two integers
 * pointed to by @a and @b.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 *
 * Description: This function implements the bubble sort algorithm
 * to sort the elements in ascending order. It iterates through the
 * array, comparing adjacent elements and swapping them if they are
 * in the wrong order. The process repeats until the entire array
 * is sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			/* If the next element is smaller, swap them */
			if (array[j + 1] < array[j])
			{
				swap(&array[j + 1], &array[j]);
				swapped = 1;
				print_array(array, size);
			}
		}

		/* If no swapping occurred, the array is already sorted */
		if (swapped == 0)
		{
			/* Break the loop as the array is sorted */
			break;
		}
	}
}
