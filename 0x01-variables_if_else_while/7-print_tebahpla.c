#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26]="abcdefghijklmnopqrstuvwxyz";
int i = 25;
while (i >= 0)
{
putchar(alpha[i]);
if (i == 0)
{
putchar('\n');
}
i--;
}
return (0);
}
