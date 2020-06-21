#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - gets random number, and gets last digit of it
 *
 * Description: uses rand for random number, and divides abs value to get last
 * Return: returns 0
 */



int main(void)

{

	int n, a;


	char last[] = "Last digit of";
	char st[] = "is";

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
		printf("%s %i %s %i and is greater than 5\n", last, n, st, a);
	else if (n == 0)
		printf("%s %i %s %i and is 0\n", last, n, st, a);
		else
			printf("%s %i %s %i and is less than 6 and not 0\n", last, n, st, a);
	return (0);

}
