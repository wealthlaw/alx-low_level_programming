#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: address to memory block
 * @b: char
 * @n: number of bytes
 *
 * Return: pointer(s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
{
	s[n - 1] = b;
	n--;
}
	return (s);
}
