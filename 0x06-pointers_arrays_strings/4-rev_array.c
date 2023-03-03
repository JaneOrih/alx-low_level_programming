#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - function that reverses content of an array of integers.
 * @n:  number of elements of the array
 * @a: parameter
 * Return: type char
 */
void reverse_array(int *a, int n)
{
	int i, j, k, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
	for (k = 0; k < n; k++)
	{
		printf("%d ", *(a[k]));
	}
	printf("\n");
}
