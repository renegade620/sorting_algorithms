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
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: array of integers
 * @size: size of array
 *
 * Return: Nothing!
 */
void selection_sort(int *array, size_t size)
{
	int *x;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		x = array + i;
		for (j = i + 1; j < size; j++)
			x = (array[j] < *x) ? (array + j) : x;

		if ((array + i) != x)
		{
			swap(array + i, x);
			print_array(array, size);
		}
	}
}
