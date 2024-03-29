#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: parameter
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp ==NULL)
	{
		return(-1);
	}
	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (i);
}
