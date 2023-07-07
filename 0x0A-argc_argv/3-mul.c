#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main(int argc, char *argv[])
{
int m;
int i;
if (argc  == 3)
{
int k = atoi(argv[1]);
int j = atoi(argv[2]);
i = k * j;
printf("%d\n", i);
m = 0;
}
else if (argc != 3)
{
printf("Error\n");
m = 1;
}
return (m);
}
