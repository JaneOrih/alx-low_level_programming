include <stdio.h>


/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long double));
	printf("Size of an float: %2d byte(s)\n", sizeof(float));
	return (0);
}
