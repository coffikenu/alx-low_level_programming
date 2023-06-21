#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
putchar(alpha[i]);
if (i == 25)
{
putchar('\n');
}
i++;
}
}
