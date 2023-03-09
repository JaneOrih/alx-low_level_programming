#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parametr
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int le = 0;

	if (*s)
	{
		le++;
		le = le + _strlen_recursion(s + 1);
	}
	return (le);
}
