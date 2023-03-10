#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - This is used for changing all arg to lower case
 * @c: arg passed
 * Return: always 0
 */

int _islower(int c)
{
	int v, k;

	v = islower(c);

	if (v != 0)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
