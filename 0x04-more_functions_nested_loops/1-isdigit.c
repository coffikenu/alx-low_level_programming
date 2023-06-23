#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check the code
 *@c: first parametr
 * Return: Always 0.
 */
int i = 0 ;
int b;
char num1[10] = "0123456789";
int _isdigit(int c)
{
for (i = 0 ; i < 10 ; i++)
{
if (num1[i] == c)
{
b = 1;
break;
}
else
{
b = 0;
}
}
return (b);
}
