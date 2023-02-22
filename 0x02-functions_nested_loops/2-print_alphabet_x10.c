#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(i);
			putchar('\n');
		}
	}
	putchar('\n');
}
