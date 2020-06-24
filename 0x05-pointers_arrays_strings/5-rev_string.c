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
	char r[];

	int c, b, e = 0;

	while (s[c] != '\0')
		c++;

	e = c - 1;

	for (b = 0; b < c; b++)

	r[b] = s[e];
	e--;
}
