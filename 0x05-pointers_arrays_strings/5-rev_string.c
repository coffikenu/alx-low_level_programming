#include "main.h"
#include <string.h>
void rev_string(char *s)
{
char n[2000];
int i;
int j = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
n[j] = s[i];
j++;
}
s = n;
}
