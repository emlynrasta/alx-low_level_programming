#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for a lowercase character
 * Description - returns 1 if lowercase
 * @c - caharacter to be checked
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
