#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

	if (l > 5)
{
	printf("Last digit of %d and %d is greater than 5 \n", n, l);
}
	else if (l == 0)
{
	printf("last digit of %d and %d is 0\n", n, l);
}
	else
{
	printf("last digit %d and %d is less than 6 and not 0\n", n, l);
}
	return (0);
}
