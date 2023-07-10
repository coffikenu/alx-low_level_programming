#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - check the code for ALX School students.
 * @str: first parametr
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *it;
if (str == NULL)
{
return (NULL);
}
it = strdup(str);
return (it);
}
