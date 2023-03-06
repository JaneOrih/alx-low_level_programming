#include "main.h"
#include <string.h>

/**
 * *_memset -  function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: parameter
 * Return: character variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;
	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
