#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * binary_to_uint - fn
 *@b: param
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0, i, j, n, p = 1, s;
if (b == NULL)
return (0);
n = strlen(b);
for (i = 0; i < n; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
}
s = atoi(b);
for (i = n; i > 0; i--)
{
j = s % 10;
k = k + j *p;
s = s / 10;
p *= 2;
}
return (k);
}
