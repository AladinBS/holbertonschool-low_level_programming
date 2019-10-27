#include "holberton.h"
/**
 * print_sign - entry point
 * @n : number to check
 * Return: int
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
