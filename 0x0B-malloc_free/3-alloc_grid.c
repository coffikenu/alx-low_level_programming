#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - check the code for ALX School students.
 * @widht: lol
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
array = malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
}
return (array);
}
