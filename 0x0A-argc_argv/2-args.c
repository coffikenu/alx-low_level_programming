#include "main.h"
#include <stdio.h>
/**
 * main - is the main program
 * @argc: is first parametr
 * @argv: is second parametr
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
