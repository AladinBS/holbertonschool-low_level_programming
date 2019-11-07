#include "holberton.h"
/**
* binary_to_uint - converts a binary nbr to an int.
* @b: pointer to a string containing a binary nbr
* Return: unsigned int //Aladin Bensassi
*/
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int cal = 0;
if (!b)
return (0);
x = 0;
while (b[x] != '\0')
{
if (b[x] != '0' && b[x] != '1')
return (0);
x++;
}
for (x = 0; b[x] != '\0'; x++)
{
cal <<= 1;
if (b[x] == '1')
cal += 1;
}
return (cal);
}
