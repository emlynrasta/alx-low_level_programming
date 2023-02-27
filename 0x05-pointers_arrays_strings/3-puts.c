#include "main.h"

/**
 * _puts - prints a string and newine to stdout
 * @str : string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);
	_putchar('\n');
}
