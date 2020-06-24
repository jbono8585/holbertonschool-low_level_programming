#include "holberton.h"

/**
 * *_strcpy - copies the string
 *
 * @src: string
 * @dest: pointer
 *
 * Return: pointer to dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for (; *(src + c) != '\0'; c++)
		{
			*(dest + c) = *(src + c);
		}
return (dest);
}
