#include <stdio.h>
/**
 * main -  prints text to stderr
 *
 * Return: always 1 Success
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stderr);
	return (1);
}
