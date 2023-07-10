 #include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - check the code for ALX School students.
 * @s1: first parametr
 * @s2: second parametr
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int i;
int s = 0;
int d = strlen(s1);
int j = strlen(s2);
char *b = malloc(d + j + 1);
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else if(s1 == NULL && s2 != NULL)
{
d = 0;
}
else if(s2 == NULL && s1 != NULL)
{
j = 0;
}
for (i = 0; i < (d + j); i++)
{
if (i >= d)
{
b[i] = s2[s];
s++;
}
else
{
b[i] = s1[i];
}
}
return (b);
}
