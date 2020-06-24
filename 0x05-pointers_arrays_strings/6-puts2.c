#include "holberton.h"

/**
 * puts2 - print every other character of string followed by new line.
 *
 * @str: string to print from.
 *
 * Return: 0
 *
 */
void puts2(char *str)
{
	int a;

	for (a = 0; *(str + a) != 0; a = a + 2)
		{
			_putchar(*(str + a));
		}
	_putchar('\n');
}

