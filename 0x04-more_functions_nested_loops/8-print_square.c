#include <stdio.h>
#include "main.h"
/**
 * print_square - check the code
 * @size: is parametr
 * Return: Always 0.
 */
void print_square(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
if (j == size-1)
{
putchar('\n');
}
}
}
if (size <= 0)
{
putchar('\n');
}
}
