#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter per element
 * @array: parameter
 * @size: array size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
