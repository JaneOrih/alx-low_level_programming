#include "main.h"

/**
 * print_line - function for line
 * @n: parameter
 * Return: not in this function 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
