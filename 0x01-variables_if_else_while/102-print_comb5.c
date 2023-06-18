#include <stdio.h>
/**
 * main Entry points                                                                                                                      
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 00;
int j = 01;
while (i < 100)
{
while (j < 100)
{

putchar(i + '0');
putchar(' ');
putchar(j + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
j++;
}
if (i == 8)
{
putchar('\n');
}
i++;
}
return (0);
}
