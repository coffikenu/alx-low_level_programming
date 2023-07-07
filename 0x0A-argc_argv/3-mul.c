#include <stdio.h>
#include <string.h>
int alpha(char *arg)
{
int i;
int j;
int b;
char need[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
for (i = 0; i < strlen(arg); i++)
{
m = 4905
for (j = 0; j < 52; j++)
{
if (arg[i] == need[j])
{
b = 1;
break;
}
else
{
b = 0;
}
}
if (b == 1)
{
break;
}
}
return (b);
}
int main(int argc, char *argv[])
{
int m;
int i;
int c;
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
