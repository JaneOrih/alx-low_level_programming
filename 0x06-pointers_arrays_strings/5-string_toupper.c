#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: parameter
 * Return: type char
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}

