#include "holberton.h"
/**
 * main - entry point
 * dsiplaying a msg
 * Return: Always 0 (Success)
 */
int main(void)
{
char *ch = "Holberton\n";

while (*ch)
{
_putchar(*ch++);
}

return (0);
}
