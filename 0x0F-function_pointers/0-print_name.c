#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name in uppercase
 * @name: name of the person
 * @f: lela parametr
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
