#include <stdio.h>

/**
 * main - prints alphabets except q and e
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int A;

	for (A = 48; A <= 57; A++)
{
	putchar (A);

	if (A == 57)
{
	break;
}
	putchar (',');
	putchar (' ');
}
	putchar ('\n');
	return (0);
}
