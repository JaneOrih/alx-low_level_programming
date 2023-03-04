#include "main.h"

/**
 * *rot13 - function that encodes a string into 1337
 * @c: parameter
 * Return: type char
 */
char *rot13(char *c)
{
	int i, j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (c[i] == d[j])
			{
				c[i] = rot[j];
				break;
			}
		}
	}
	return (c);
}
