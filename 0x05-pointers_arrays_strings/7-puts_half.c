#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str : string to be split
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, mid;

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	if (j % 2 == 0)
	{
		mid = j / 2;
	} else if (j % 2 != 0)
	{
		mid = (j - 1) / 2;
		mid += 1;
	}

	for (; str[mid] != '\0'; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
