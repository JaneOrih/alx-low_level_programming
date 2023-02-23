#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - function for denoting upper case
 * @c: parameter
 * Return: not always 0
 */

int _isupper(int c)
{
	int d, e;

	d = isupper(c);
	if (d != 0)
	{
		e = 1;
	}
	else
	{
		e = 0;
	}
	return (e);
}
