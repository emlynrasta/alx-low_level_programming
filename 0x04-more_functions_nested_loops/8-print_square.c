#include "main.h"
/**
 * void print_square - prints a square
 * @size : size of th square
 * Return: void
 */

void print_square(int size)
{
    int i, j;

    if (size > 0)
    {
        for (i = 0; i <= size; i++)
        {
            for (j = i; j <= size; i++)
            {
                _putchar('#');
            }
            if (i == size - 1)
                continue;

            _putchar('\n');
        }
    }
    _putchar('\n');
}