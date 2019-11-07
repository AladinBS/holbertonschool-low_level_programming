#include "holberton.h"
/**
* set_bit - sets the value to 1.
* @n: pointer of an unsigned long int.
* @index: index of the bit.//Aladin BS
* Return: 1 if it worked, -1 if it didn't.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
*n = (*n | m);
return (1);
}
