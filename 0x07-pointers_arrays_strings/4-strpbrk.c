#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string
 * @accept: string to compare
 *
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
{
	if (s[i] == accept[j])
	break;
}
	if (accept[j])
	return (s + i);
}
	return (0);
}
