#include <stdio.h>
/**
 * main Entry points                                                                                                                      
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 100)
{
int j = i+1;
while (j < 100)
{
putchar((i/10) + '0');
putchar((i%10) + '0');
putchar(' ');
putchar((j/10) + '0');
putchar((j%10) + '0');
if (i < 98)
{
putchar(',');
putchar(' ');
}
j++;
}
if (i == 98)
{
putchar('\n');
}
i++;
}
return (0);
}
