#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);
			if (i + 1 != n)
			{
				printf("%s", separator);
				printf(" ");
			}
		}
	}
	printf("\n");
}
