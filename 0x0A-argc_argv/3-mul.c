#include <stdio.h>
int main(int argc, char *argv[])
{
int i;
if (argc  == 3)
{
int k = *argv[1] - '0';
int j = *argv[2] - '0';
i = j * k;
printf("%d\n", i);
}
else if (argc != 3)
{
printf("Error\n");
}
return (0);
}
