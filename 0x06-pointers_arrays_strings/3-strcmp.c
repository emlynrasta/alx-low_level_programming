#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m, n = 0;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (i < j)
	{
		m = i;
	} else
	{
		m = j;
	}

	while (k < m)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		} else
		{
			n = s1[k] - s2[k];
		}
		k++;

	}
	return (n);
}
