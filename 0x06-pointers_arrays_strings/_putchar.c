#include "main.h"
#include <unistd.h>

/**
 * _putchar - returns a char
 * @a : character to be returned
 *
 * Return : a
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
