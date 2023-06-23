#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - check the code
 * @n: is parametr
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for(j = 0; j <= i; j++)
{
if (j == i)
{
putchar('\\');
putchar('\n');
}
else if (j < i)
{
putchar(' ');
}
}
}
if (n <= 0)
{
putchar('\n');
}
}
