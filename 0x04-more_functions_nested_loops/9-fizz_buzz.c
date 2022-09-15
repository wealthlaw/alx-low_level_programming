#include "main.h"

/**
 * main - prints or fizz or buzz or fizzBuzz
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
{
	if ((num % 3 == 0) && (num % 5 == 0))
{
	_putchar("FizzBuzz");
}
	else if ((num % 3) == 0)
{
	_putchar("Fizz ");
}
	else if ((num % 5) == 0)
{
	if (num != 100)
{
	_putchar("Buzz ");
}
	else
{
	_putchar("Buzz");
}
}
	else
{
	_putchar("%d ", num);
}
}
	_putchar('\n');

	return (0);
}

