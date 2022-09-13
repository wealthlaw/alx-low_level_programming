#include "main.h"
/**
 * _islower - function to check lowercase
 * @c: argument of the function
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}
