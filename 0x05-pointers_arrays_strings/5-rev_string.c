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
	int e = 0;
	int b;
	char d;
	char f;

	while (s[e] != '\0')
	{
		e++;
	}
	e--;

	for (b = 0; b < e; b++)

	d = s[e];
	f = s[b];
	s[e] = f;
	s[b] = d;
	e--;
}
