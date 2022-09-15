#include "main.h"



/**
 * _isupper - checks if it is uppercase or lowercase
 *
 * @c: argument for the function
 *
 * Return: 1,0
 *
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
	return (0);

}
