#include <stdio.h>
#include "3-calc.h"
/**
 * main - function
 * @argc: argument counter
 * @argv: argument vector
 * Return: integer
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

