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
	if (1 > 5)
{
	printf("Last digit of %d is %d greater than 5 \n", n, l);
}
	else if (1 == 0)
{
	printf("last digit of %d is %d and is 0\n", n, l);
}
	else
{
	printf("last digitd %d is %d and is less than 6 and not 0\n", n, 1);
}
	return (0);
}
