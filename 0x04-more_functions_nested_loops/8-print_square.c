#include "main.h"

/**
 * print_square - prints square
 * @size: holds square value
 * Return: void
 */

void print_square(int size)
{
	int l, b;

	if (size > 0)
{
	for (l = 0; l < size; l++)
{
	for (b = 0; b < (size - 1); b++)
{
	_putchar('#');
}

	_putchar('#');
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
