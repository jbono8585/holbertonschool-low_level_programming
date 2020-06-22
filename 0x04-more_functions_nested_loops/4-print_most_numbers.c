#include "holberton.h"

/**
 * print_most_numbers -print numbers 0-9 except 2 or 4.
 *
 *
 *
 * Return: 0 if successful.
 *
 */

void print_most_numbers(void)
{
	int g;

	g = 0;
	while (g <= 9)
	{
		if (g != 2 && g != 4)
		{
			_putchar(g + '0');
		}
			g++;
	}
		_putchar('\n');
}
