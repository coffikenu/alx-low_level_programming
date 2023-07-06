#include "main.h"
#include <math.h>
/**
 * int _sqrt_recursion - check the code
 * @n: is a parametr
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
return squre(n, 1);
}
/**
 * int squre - check the code
 * @n: is a parametr
 * @i: is second parametr
 * Return: Always return 0
 */
int squre(int n, int i)
{
int sqr = i * i;
if (sqr > n)
{
return (-1);
}
else if (sqr == n)
{
return (i);
}
else
{
return squre(n, i + 1);
}
}
