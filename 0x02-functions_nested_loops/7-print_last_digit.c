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

	return (last_digit);
}
