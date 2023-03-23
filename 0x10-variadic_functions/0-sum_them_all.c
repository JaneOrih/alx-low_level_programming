#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list args;

	va_start(args, n);

	sum = 0;

	if (n == 0)
	{
		return (sum);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, unsigned int);
		}
	}
	va_end(args);
	return (sum);
}
