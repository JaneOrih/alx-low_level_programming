#include "main.h"
#include <stdio.h>

/**
 * main - function for this source code
 *
 * Return: zero in this case
 */

int main(void)
{
	int j;

	j = 0;
	while (j < 100)
	{
		j++;
		if ((j % 3 == 0) && (j % 5 == 0))
			printf("FizzBuzz ");
		else if (j % 5 == 0)
			printf("Buzz ");
		else if (j % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", j);
	}
	printf("\n");
	return (0);
}
