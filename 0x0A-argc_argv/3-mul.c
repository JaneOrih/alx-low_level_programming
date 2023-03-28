#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: function counter
 * @argv: vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);
	(void) argc;
	printf("%d\n", mul);
	return (0);
}
