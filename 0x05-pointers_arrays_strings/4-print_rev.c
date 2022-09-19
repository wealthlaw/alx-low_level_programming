#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: String Value
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(s[len]);
	putchar(10);
}
