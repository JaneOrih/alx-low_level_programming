#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 * Return: returns char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
