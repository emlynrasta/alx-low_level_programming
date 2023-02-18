#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
		putchar('0' + (j % 10));

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
