#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return: Nil
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
{
	if ((n == 50) || (n == 52))
{
	continue;
}
		_putchar(n);
}
	_putchar('\n');

}
