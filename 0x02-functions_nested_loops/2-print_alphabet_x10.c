#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return:no return
 */
void print_alphabet_x10(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 26)
{
putchar(alpha[j]);
if (j == 25)
{
putchar('\n');
}
j++;
}
i++;
}
}
