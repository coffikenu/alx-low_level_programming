#include <stdio.h>
#include "main.h"
/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int i ;
for (i = 0 ;i < 10 ; i++)
{
putchar(i + '0');
if (i == 9)
{
putchar('\n');
}
} 
}
