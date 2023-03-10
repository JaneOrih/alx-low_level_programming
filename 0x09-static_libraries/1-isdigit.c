#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function for denoting numbers
 * @c: parameter
 * Return: not always 0
 */

int _isdigit(int c)
{
	int d, e;

	d = isdigit(c);
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
