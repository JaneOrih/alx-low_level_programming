#include "main.h"
#include <string.h>
/**
 * *_strncat - function appends the src string to the dest string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: type char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
