#include "main.h"
/**
 * puts_half - function to print the second half of the string
 * @str: parameter
 * Return: returning void
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
