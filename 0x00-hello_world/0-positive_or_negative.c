#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* find out if the last number is greater, less than, or equal to zero*/

int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
printf("is positive");
if (n == 0)
printf("is zero");
if (n < 0)
printf("is negative");

return (0);

}
