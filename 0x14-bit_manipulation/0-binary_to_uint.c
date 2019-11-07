#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
* binary_to_uint - fn
*@b: param
* Return: Always 0.//AladinBS
*/
unsigned int binary_to_uint(const char *b)
{
int som, x;
unsigned int k = 0, p = 1;
if (*b == '\0')
return (0);
for (som = 0; b[som];)
som++;
for (x = som - 1; x >= 0; x--)
{
if (b[x] != '0' && b[x] != '1')
return (0);
k = k + (b[x] - '0') * p;
p = p * 2;
}
return (k);
}
