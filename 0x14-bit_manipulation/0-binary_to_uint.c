#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - fn
 *@b: param
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
int s, i;
unsigned int k = 0, p = 1;
if (*b == '\0')
return (0);
for (s = 0; b[s];)
s++;
for (i = s - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
k = k + (b[i] - '0') * p;
p = p * 2;
}
return (k);
}
