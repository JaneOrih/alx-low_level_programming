#include "main.h"
#include <string.h>
/**
 * *_strcat - function appends the src string to the dest string
 * *dest: parameter
 * *src: prameter
 * Return: type char
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
