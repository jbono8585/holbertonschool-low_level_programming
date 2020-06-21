#include "holberton.h"

/**
 *_isdigit - checks if number is between 0 and 9.
 *
 * @c: is a digit
 *
 * Return: 1 if btween 0 and 9 and 0 if otherwise.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
