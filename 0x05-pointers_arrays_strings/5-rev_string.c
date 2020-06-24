#include "holberton.h"

/**
 * rev_string - reverse a string.
 *
 * @s: string to be reversed
 *
 * Return: 0.
 *
 */

void rev_string(char *s)
{
	for (c = 0; c < length/2; c++)
	{
		t = *e;
		*e = *b;
		*b = t;
 
		b++;
		e--;
	}
