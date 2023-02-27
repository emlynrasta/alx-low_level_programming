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

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
