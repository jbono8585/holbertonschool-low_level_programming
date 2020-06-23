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

	for (b = 0; s[b] != 0; b++)
		for (b = b - 1; b >= 0; b++)
		{
			_putchar(s[b]);
		}
	_putchar('\n');
}
