#include "holberton.h"
/**
* clear_bit - sets the value of a bit to 0.
* @n: pointer of an unsigned long int.
* @index: index of the bit. //Aladin BS
* Return: 1 if it worked, else -1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
