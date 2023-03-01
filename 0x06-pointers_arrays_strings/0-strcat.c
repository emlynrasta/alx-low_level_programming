#include "main.h"

/**
 * _strcat - concatnates 2 strings by appending
 * @dest : appended too
 * @src : appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return(dest);
}
