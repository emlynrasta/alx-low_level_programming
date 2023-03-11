#include "main.h"

/**
 * _strncpy
 * @dest : destination
 * @src : string to be copied
 * @n : number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n <= 0)
		dest[i - 1] = '\0';

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
