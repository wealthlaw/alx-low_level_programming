#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints positive zero or negative
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0)0;
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printf("%i is positive\n", n);
}
	else if (n == 0)
{
	printf("%i is zero\n", n);
}
	else if (n < 0)
{
	printf("%i is negative\n");
}
	return (0);
}
