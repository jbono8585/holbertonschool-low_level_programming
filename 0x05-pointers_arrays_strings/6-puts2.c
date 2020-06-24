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
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b = b + 2)
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}

