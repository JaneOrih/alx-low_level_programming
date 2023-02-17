#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int lc, uc;
	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}

