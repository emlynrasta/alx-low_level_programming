#include "main.h"

/**
 * _strlen - returns length of a string
 * @s : parameter string to me checked
 *
 * Return: length of *s
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;

	for (; s[i] != '\0'; i++)
		len++;

	return (len);
}
