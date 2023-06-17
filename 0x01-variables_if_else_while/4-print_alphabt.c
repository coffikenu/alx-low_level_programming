#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
int i = 0;
while (i < 24)
{
putchar(alphabet[i]);
if (i == 23)
{
putchar('\n');
}
i++;
}
return (0);
}
