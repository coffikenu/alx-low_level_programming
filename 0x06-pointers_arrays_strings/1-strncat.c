#include <string.h>
#include "main.h"
/**
 * _strncat - check the code
 * @dest: first parametr
 * @src: second parametr
 * @n: third parametr
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
dest = strncat(dest, src, n);
return (dest);
}
