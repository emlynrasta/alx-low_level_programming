#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c : int to be computed
 *
 * Return: always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (0);
}
