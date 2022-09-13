#include "main.h"
/**
 * print_alphabet - prints alpabet a-z
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
{
	_putchar(A);
}
	_putchar('\n');
}
