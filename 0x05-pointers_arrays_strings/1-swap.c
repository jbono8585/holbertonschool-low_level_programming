#include "holberton.h"

/**
 * swap_int - swap values between two integers
 *
 * @a: pointer to integer
 * @b: pointer to integer
 *
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
