#include "main.h"

/**
 * print_sign - function for denoting sign
 * @n: arg passed in function
 * Return: not always 0
 *
 */
int print_sign(int n)
{
	int k;

	if (n > 0)
	{
		_putchar('+');
		k = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		k = 0;
	}
	else
	{
		_putchar('-');
		k = -1;
	}
	return (k);
}
