#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
char alphabet[10] = "0123456789";
int i = 0;
while (i < 10)
{
putchar(alphabet[i]);
if (i == 9)
{
putchar('\n');
}
i++;
}
return (0);
}
