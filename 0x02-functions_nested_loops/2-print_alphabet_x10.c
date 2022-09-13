#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet 10x
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char A;
	int i;

	for (i = 1; i <= 10; i++)
{
	for (A = 'a'; A <= 'z'; A++)
{
	_putchar(A);
}
	_putchar('\n');
}
}
