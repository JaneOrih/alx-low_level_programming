#include <stdio.h>
/**
 * main - function
 * @argc: function counter
 * @argv: vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
