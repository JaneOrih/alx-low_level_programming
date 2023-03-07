#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
	int i, j,sumr, suml;

	sumr = 0;
	suml = 0;
	for (i = 0; i < size; i++)
	{
		sumr = sumr + a[i * size + i];
	}
	for (j = size - 1; j >= 0; j--)
	{
		suml = suml + a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sumr, suml);
}

