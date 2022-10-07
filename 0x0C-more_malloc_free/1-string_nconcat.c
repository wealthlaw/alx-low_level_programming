#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conantenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte of second string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		I = 0;
	else
{
	for (i = 0; s2[i]; i++)
		;
}
	if (s2 == NULL)
	J = 0;
	else
{
	for (j = 0; s2[j]; j++)
		;
}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
