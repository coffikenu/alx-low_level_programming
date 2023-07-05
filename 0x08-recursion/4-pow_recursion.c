#include "main.h"
#include <math.h>
/**
 * _pow_recursion - check the code
 * @x: first parametr
 * @y: second parametr
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return pow(x, y); 
}
}


