#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: - function argument
 * Return: 1 or 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z)')
{
	return (1);
}
	else
{
	return (0);
}
}
