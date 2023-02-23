#include <stdio.h>
#include "main.h"
/**
 * _isalpha - return type int
 * Description - checks for an alphabetic character
 * @c : character to be checked
 * Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
