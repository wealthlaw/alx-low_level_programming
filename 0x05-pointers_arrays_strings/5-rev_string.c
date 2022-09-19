#include "main.h"

/**
 * rev_string - reverses a string
 * @s: strng value
 * Return: Void
 */

void rev_string(char *s)
{
	char tmp;
	int l, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
{
	len++;
}
	len1 = len - 1;
	for (l = 0; l < len / 2; l++)
{
	tmp = s[l];
	s[l] = s[len1];
	s[len1--] = tmp;
}
}
