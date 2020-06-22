#include "holberton.h"

/**
 * print_numbers - prints numbers 1 through 9 followed by a new line
 *
 *
 *
 *
 * Return: 0 if successful.
 *
 */

void print_numbers(void)

{
	int d = 0;

	while (d <= 9)
		{
			_putchar(d);
			d++;
		}

			_putchar('\n');
}
