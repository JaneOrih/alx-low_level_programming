#include "main.h"

/**
 * print_alphabet_x10 - function that contains loops
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
