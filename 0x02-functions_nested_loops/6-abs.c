#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value
 * @c: function argument
 * Return: 0 (Success)
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
{
	return (c);
}
	else
{
	return (c * -1);
}
}
