#include "main.h"
#include <string.h>
/**
 * *_strncpy - function appends the src string to the dest string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: type char
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
