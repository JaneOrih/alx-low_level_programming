#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * check - function to check
 * @s: array
 * Return: int
 */
int check(char *s)
{
	unsigned int c = 0;

	while (c < strlen(s))
	{
		if (!isdigit(s[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);

}


/**
 * main - maun function
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i, sum, n;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!check(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				n = atoi(argv[i]);
				sum += n;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
