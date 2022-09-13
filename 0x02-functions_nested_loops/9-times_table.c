#include "main.h"

/**
 *times_table - Prints the 9 times table
 */
void times_table(void)
{
	int n, t, i;

	for (n = 0; n <= 9; n++)
{
	_putchar('0');

	for (t = 1; t <= 9; t++)
{
	_putchar(',');
	_putchar(' ');

	i = n * t;

	if (i <= 9)
	_putchar(' ');
	else
	_putchar((i / 10) + '0');

	_putchar((i % 10) + '0');
}
	_putchar('\n');
}
}
