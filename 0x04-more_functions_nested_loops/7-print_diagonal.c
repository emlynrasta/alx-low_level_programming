#include "main.h"
/**
 * print_diagonal - draws diagonal line in terminal
 * @n : number of times '_' is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
    int i, space;

    if (n <= 0)
    {
        _putchar('\n');
    } else
    {
        for (space = 0; space  < n; space++)
			_putchar(' ');
		_putchar('\\');

		if (n == n - 1)
			continue;

		_putchar('\n');
    }
    _putchar('\n');
}