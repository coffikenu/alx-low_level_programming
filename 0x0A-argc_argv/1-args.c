#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
if ((sizeof(*argv) / sizeof(argv[0])) - 1 == i)
{
printf("%d\n", i);
}
}
return (0);
}
