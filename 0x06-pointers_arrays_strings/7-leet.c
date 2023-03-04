#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: parameter
 * Return: type char
 */

char *leet(char *c)
{
	int i, j;
	char d[] = "4433007711";
	char a[] = "aAeEoOtTlL";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = d[j];
			}
		}
	}
	return (c);
}
