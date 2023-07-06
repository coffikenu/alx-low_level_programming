#include "main.h"
#include <stdbool.h>
/**
 * is_prime_number - check the code
 * @n: is parametr
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (actual_prime(n, n - 1));
}
}
/**
 * actual_prime - check the code
 * @n: first parametr
 * @i: second parametr
 * Return: Always 0.
 */
int actual_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
else if (n % i == 0 && i > 0)
{
return (0);
}
return (actual_prime(n, i - 1));
}
