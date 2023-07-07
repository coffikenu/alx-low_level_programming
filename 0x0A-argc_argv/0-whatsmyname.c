#include "main.h"
#include <stdio.h>
/**
 * main - is main method
 * @argc: is parametr
 * @argv: is second parametr
 * return - Always return 0
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
