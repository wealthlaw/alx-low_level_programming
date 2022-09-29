#include "main.h"

/**
 * is_prime_number - returns the 1 if integer
 * is a  prime number
 * @n: integer number
 *
 * Return: 1,0
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is a  prime number
 * @n: integer
 * @i: number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i <= 1)
	return (1);
	else if (n % i == 0)
	return (0);
	return (is_prime(n, i - 1));
}
