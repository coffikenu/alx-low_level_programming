#include <stdio.h>
int main(int argc, char *argv[])
{
int m = 0;
int i;
if (argc  == 3)
{
int k = *argv[1] - '0';
int j = *argv[2] - '0';
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
