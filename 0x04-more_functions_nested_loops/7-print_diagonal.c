#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: argument
 * Return: void
 */

void print_diagonal(int n)
{
	int l, t;

	if (n > 0)
{
	for (l = 0; l < n; l++)
{
	for (t = 0; t < l; t++)
{
	_putchar(' ');
}

	_putchar('\\');

	if (l == (n - 1))
{
	continue;
}
	_putchar('\n');
}
}
	_putchar('\n');
}
