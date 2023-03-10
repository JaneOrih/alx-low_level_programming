#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that denotes alphabet
 * @c: argument for the defined function
 * Return: always 0
 */

int _isalpha(int c)
{
	int j, k;

	j = isalpha(c);
	if (j != 0)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
