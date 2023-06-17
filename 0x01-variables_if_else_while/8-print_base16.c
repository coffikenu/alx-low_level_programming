#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[16] = "0123456789abcdef";
int i = 0;
while (i < 16)
{
putchar(alpha[i]);
if (i == 15)
{
putchar('\n');
}
i++;
}
return (0);
}
