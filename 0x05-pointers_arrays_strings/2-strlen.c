#include "holberton.h"

/**
 * _strlen - return length of the string.
 *
 * @s: a character.
 *
 * Return: length of the string.
 *
 */

int _strlen(char *s)
{
	int f;

	for (f = 0; *s != '0'; s++)
		f++;
	return (f);
}
