#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
