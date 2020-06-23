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
	while (*s != 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
