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
	char d;

	for (d = 0; d <= 9; d++)
		{
			_putchar(d + '0');
		}

			_putchar('\n');
}
