#include "sort.h"

/**
 * swap - swaps integers in array
 *
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 *
 * Return: Nothing!
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort in ascending order
 *
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: Nothing!
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}
