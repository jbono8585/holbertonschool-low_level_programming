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
	b--;
	while (b >= 0)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
