#include <stdio.h>

/**
 * main - prints alphabets except q and e
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'a'; A++)
{
	if (A == 'q')
		continue;
	else if (A == 'e')
		continue;
	putchar (A);
}
	putchar ('\n');
	return (0);
}
