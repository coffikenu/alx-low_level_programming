#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - check the code
 * @s: parametr
 * Return: Always 0.
 */
int i = 1;
void _print_rev_recursion(char *s)
{
int j = strlen(s) - i;
if (j > 1)
{
printf("%c", s[j]);
i++;
_print_rev_recursion(s);

}
else if (j == 1)
{
printf("%c%c", s[j], s[j - 1]);
}
}
