#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n : number of times '_' is to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		if (i != n)
			_putchar('\n');
	}
	_puchar('\n');
}
