#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - check the code for ALX School students.
 * @width: lol
 * @height: lost
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
int i;
int **array;
if (width <= 0 && height <= 0)
{
return (NULL);
}
array = (int **)malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(width * sizeof(int));
}
if (width > 0 && height > 0)
{
return (array);
}
for (i = 0; i < height; i++)
{
  free(array[i]);
}
free(array);
return (NULL);
}
