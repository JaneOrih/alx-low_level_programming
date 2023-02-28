#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function for string counting
 * @s: parameter
 * Return: returning integer is void
 */
void rev_string(char *s)
{
	int l, i;
	char k;

	for (l = 0; s[l] != '\0'; l++)

	while (l--)
	{
		for (i = 0; i < l - 1; i++)
		{
			k = s[i];
			s[i + 1] = k;
			s[i] = s[i + 1];
		}
	}

}
