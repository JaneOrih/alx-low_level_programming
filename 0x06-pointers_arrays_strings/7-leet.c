#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: parameter
 * Return: type char
 */

char *leet(char *c)
{
	int i;

	while (c[i] != '\0')
	{
		if ((c[i] == 'a') || (c[i] == 'A'))
		{
			c[i] = '4';
			i++;
			continue;
		}
		if ((c[i] == 'e') || (c[i] == 'E'))
		{
			c[i] = '3';
			i++;
			continue;
		}
		if ((c[i] == 'o') || (c[i] == 'O'))
		{
			c[i] = '0';
			i++;
			continue;
		}
		if ((c[i] == 't') || (c[i] == 'T'))
		{
			c[i] = '7';
			i++;
			continue;
		}
		if ((c[i] == 'l') || (c[i] == 'L'))
		{
			c[i] = '1';
		}
		i++;
	}
	return (c);
}
