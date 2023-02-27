#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char rev[10];
	int j;

	for (i = 0; s[i] != '\0';)
		i++;

	for (; i >= 0; i--)
	{
		if (s[i] != '\0')
		{
			for (j = 0; j++;)
				rev[j] = s[i];
		}
	}
	*s = *rev;
}
