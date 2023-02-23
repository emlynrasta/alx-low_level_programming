#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @c : integer parameter
 *
 * Return: last digit
 */

int print_last_digit(int c)
{

	int last_digit;

	last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit);
	return (last_digit);
}
