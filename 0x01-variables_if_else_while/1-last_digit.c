#include <stdio.h>

#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ( n > 5)
{
printf("is %d and is greater than 5\n", n);
}
else if ( n < 6 && n !=0 )
{
printf("is %d and is less than 6 and not 0\n", n);
}
else
{
printf("is %d is 0\n", n);
}
return (0);
}
