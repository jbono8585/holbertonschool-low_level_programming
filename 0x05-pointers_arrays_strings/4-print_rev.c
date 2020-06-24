#include "holberton.h"

/**
 * print_rev - prints string in reverse.
 *
 * @s: string to be printed.
 *
 * Return: 0.
 *
 */

void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != 0)
	{
		b++;
	}
	for (b = b - 1; b  >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
