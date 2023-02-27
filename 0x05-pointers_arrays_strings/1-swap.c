#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a : int 1
 * @b : int 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
