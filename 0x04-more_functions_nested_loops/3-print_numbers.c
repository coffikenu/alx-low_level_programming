#include <stdio.h>
#include "main.h"
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
