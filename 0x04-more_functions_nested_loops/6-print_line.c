#include "main.h"
#include <stdio.h>
/**
 * print_line - check the code
 *@n: is parametr
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
putchar('_');
if (i == n-1)
{
putchar('\n');
}
}
}
if (n <= 0)
{
putchar('\n');
}
}
