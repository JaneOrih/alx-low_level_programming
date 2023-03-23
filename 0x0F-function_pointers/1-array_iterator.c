#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter per element
 * @array: parameter
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
