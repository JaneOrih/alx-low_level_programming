#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	putchar('\n');
	return (0);
}
