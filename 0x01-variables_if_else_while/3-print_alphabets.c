#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
while (i < 52)
{
putchar(alphabet[i]);
if (i == 51)
{
putchar('\n');
}
i++;
}
return (0);
}

