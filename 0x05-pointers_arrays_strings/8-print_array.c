#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code for
 * @a: is first parametr
 * @n: is second parametr
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else if (i == n-1)
{
printf("%d", a[i]);
}
}
printf("\n");
}
