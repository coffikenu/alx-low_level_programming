
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
int len1 = s1 ? strlen(s1) : 0;
int len2 = s2 ? strlen(s2) : 0;
char *result = malloc(len1 + len2 + 1);
if (!result)
{
return (NULL);
}
if (len1)
{
memcpy(result, s1, len1);
}
if (len2)
{
memcpy(result + len1, s2, len2);
}
result[len1 + len2] = '\0';
return (result);
}
