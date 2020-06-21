#include "holberton.h"

/**
 *_isupper - check if C character is uppercase.
 *
 *
 *@c: is a letter that will determine the return.
 *
 * Return: 1 if the letter is uppercase and 0 if lowercase.
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else

		return (0);
}
