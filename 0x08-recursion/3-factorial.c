#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: given number
 * Return: factorial of number
 */
int factorial(int n)
{
	int nfactorial;

	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	nfactorial = factorial(n - 1);
	return (n * nfactorial);
}
