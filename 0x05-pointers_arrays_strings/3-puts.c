#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string
 * @str: string value
 * Return: Void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
