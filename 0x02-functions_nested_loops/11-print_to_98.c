#include <stdio.h>

/**
 * print_to_98 - Prints naturall number from n-98
 * @n: initial numbe to begin count
 */
void print_to_98(int n)
{
	if (n >= 98)
{
	while (n > 98)
	printf("%d, ", n--);
	printf("%d\n", n);
}

	else
{
	while (n < 98)
	printf("%d, ", n++);
	printf("%d\n", n);
}
}
