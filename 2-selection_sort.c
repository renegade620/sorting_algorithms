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
