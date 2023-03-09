#include "main.h"
/**
 * is_prime_number - returns 1 if input is a prime number, otherwise 0
 * @n: parameter
 * @i: parameter
 * Return: 0 or 1
 */
int actual_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, 2));
}

/**
 * actual_prime - function to identify prime factor
 * @n: parameter
 * @i: parameter
 * Return: 0 or 1
 */
int actual_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0 && i == n / 2)
	{
		return (1);
	}
	return (actual_prime(n, i + 1));
}
