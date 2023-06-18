#include <stdio.h>
#include <string.h>
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
char s[50] = "";
char st;
int num;
srand(time(0));
n = rand() - RAND_MAX / 2;
sprintf(s, "%d" ,n);
st = s[strlen(s)-1];
sscanf(&st, "%d", &num);
if ( n > 0 && num > 5)
{
printf("last digit of  %d is %d and is greater than 5\n",  n,num);
}
else if ( num != 0 && n < 6 && n < 6)
{
printf("last digit of  %d is %d and is less than 6 and not 0\n", n,num);
}
else if (num == 0)
{
printf("last digit of  %d is %d is 0\n", n,num);
}
return (0);
}
