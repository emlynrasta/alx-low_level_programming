#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : character to be checked
 *
 * Return: 1 for positive, -1 for negative, 0 for 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	return (0);
}
