#include "main.h"

/**
 * swap_int - function for swapping values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: void return value
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
