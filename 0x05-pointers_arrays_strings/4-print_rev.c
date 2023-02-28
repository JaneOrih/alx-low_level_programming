#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function for string in reverse
 * @s: parameter
 * Return: returning is void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
