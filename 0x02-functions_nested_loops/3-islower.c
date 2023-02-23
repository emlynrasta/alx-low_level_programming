#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for a lowercase character
 * Description - character to be checked as int
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
