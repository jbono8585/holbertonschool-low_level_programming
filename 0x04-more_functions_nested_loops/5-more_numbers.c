#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times.
 *
 *
 *
 * Return: 0 when successful.
 *
 */

void more_numbers(void)
{
	int r, c;

	r = c = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 15)
		{
			if (c > 9)
				_putchar((c / 10 + '0'));
					 _putchar((c % 10) + '0');
					 ++c;
		}
		_putchar('\n');
		r++;
	}
}
