#include "holberton.h"

/**
 * puts_half - print half string
 *
 * @str: character string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	a = a + 1;
	for (a = a /2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
		}
