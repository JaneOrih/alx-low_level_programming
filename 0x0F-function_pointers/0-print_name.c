#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: name parameter
 * @f: funnctionn pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
