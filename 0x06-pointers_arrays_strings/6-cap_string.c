#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * *cap_string -  function that capitalizes all words of a string
 * @c: parameter
 * Return: type char
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] == '\n') ||
		(c[i] == '\t') ||
		(c[i] == '.') ||
		(c[i] == ' ') ||
		(c[i] == ',') ||
		(c[i] == ';') ||
		(c[i] == '!') ||
		(c[i] == '?') ||
		(c[i] == '"') ||
		(c[i] == '(') ||
		(c[i] == ')') ||
		(c[i] == '{') ||
		(c[i] == '}'))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
		i++;
	}
	return (c);
}
