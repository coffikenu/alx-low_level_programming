#include <stdio.h>
#include <ctype.h>
int _islower(int c);
/**
* _islower - check the code.
*
* Return: Always 0.
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
