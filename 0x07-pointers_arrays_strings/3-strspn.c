#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string parameter
 * @accept: bytes to consider
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int le = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				le++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (le);
			}
		}
		s++;
	}
	return (le);
}
