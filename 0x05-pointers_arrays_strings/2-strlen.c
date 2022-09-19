#include "main.h"

/**
 *_strlen - returns string length
 * @s: string
 *Return: string length(int len);
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
