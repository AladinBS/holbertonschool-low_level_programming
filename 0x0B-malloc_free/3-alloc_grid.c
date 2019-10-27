#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer
 */
int **alloc_grid(int width, int height)
{
int l, c;
int **array;

if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (l = 0; l < height; l++)
{
array[l] = (int *)malloc(sizeof(int) * width);
if (array[l] == NULL)
{
for (c = 0; c < l; c++)
free(array[c]);
free(array);
return (NULL);
}
for (c = 0; c < width; c++)
array[l][c] = 0;
}
return (array);
}
