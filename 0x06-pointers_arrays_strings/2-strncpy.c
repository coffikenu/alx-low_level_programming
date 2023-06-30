#include "main.h"
#include <string.h>
/**
 * _strncpy - check the code
 * @dest: first parametr
 * @src: second parametr
 * @n: third parametr
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
dest = strncpy(dest, src, n);
return (dest);
}
