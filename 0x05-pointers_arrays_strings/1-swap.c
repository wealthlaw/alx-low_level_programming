#include "main.h"

/**
 * swap_int - swaps two integer value
 * first integer
 * @b: second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
