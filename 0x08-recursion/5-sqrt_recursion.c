#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: parameter
 * Return: integer
 */
int a_sqrt_recur(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (a_sqrt_recur(n, 0));
}

/**
 * a_sqrt_recur - for the actual sqrt
 * @n: parameter
 * @i: parameterr
 * Return: int type
 */

int a_sqrt_recur(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (a_sqrt_recur(n, i + 1));
}
