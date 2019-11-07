#include "holberton.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted to base 10. //Aladin BS
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '1' && *b != '0')
return (0);
number *= 2;
number += (*b == '1');
b++;
}
return (number);
}
