#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: parameter
 * Return: integer 0 or 1
 */
int strlen_recur(char *s);
int pal_check(char *s, int i, int le);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, strlen_recur(s)));
}

/**
 * strlen_recur - to find length of string
 * @s: strig
 * Return: int
 */
int strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recur(s + 1));
}

/**
 * pal_check - to determine if string is a palindrome
 * @s: string
 * @i: iteration parameter
 * @le: parameter
 * Return: integer
 */
int pal_check(char *s, int i, int le)
{
	if (*(s + 1) != *(s + le - 1))
		return (0);
	if (i >= le)
		return (1);
	return (pal_check(s, i + 1, le - 1));
}
