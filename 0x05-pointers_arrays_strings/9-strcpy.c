#include "main.h"

/**
 * _strcpy - copies string pointed to with null byte
 * @dest : copy destination
 * @src : source string to be copied
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
