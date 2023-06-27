#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * @str: is parametr
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
int b = strlen(str);
for (i = 0; i < b; i++)
{
if ((b - 1) % 2 == 0 && i > (b - 1) / 2)
{
putchar(str[i]);
}
else if ((b - 1) % 2 != 0)
{
if(i > (b - 1) / 2 || i == b - 1)
{
putchar(str[i]);
}
}
}
putchar('\n');
}
