#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: is a parametr
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
int b = strlen(str);
for (i = 0; i <= b - 1; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
