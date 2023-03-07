#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: real string
 * @needle: sub string
 * Return: char type
 * compare - for string comparison
 */
int compare(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			return (0);
		}

		haystack++;
		needle++;
	}
	return (*needle == '\0');
}
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
