#include "main.h"
/**
 * puts_half - function to print the second half of the string
 * @str: parameter
 * Return: returning void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
		i++;
	for (j = i / 2; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
