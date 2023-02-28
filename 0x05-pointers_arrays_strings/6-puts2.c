#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: parameter
 * Return: returning integer is void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
