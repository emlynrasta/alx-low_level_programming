#include "main.h"

/**
 * _strncat - concatnates 2 strings depending on n characters
 * @dest : appended too
 * @src : appended
 * @n : number of characters to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
