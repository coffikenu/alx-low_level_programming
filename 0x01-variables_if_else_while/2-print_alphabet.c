#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i=0;
while(i<26)
{
putchar(alphabet[i]);
if(i==25)
{
putchar('\n');
}
i++;
}
return (0);
}
