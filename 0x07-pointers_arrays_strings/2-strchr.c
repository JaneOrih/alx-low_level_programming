#include "main.h"
#include <stddef.h>

/**
 * *_strchr -  function that locates a character in a string
 * @s: string
 * @c: character occurence
 * Return: gives back char variable
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] != c && s[i + 1] == '\0')
		{
			return (NULL);
		}
	}
	return (0);
}
