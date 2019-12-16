#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
int c = 0;
while (s[c] != '\0' && s[c] != ' ')
{
if (s[c] >= '0' && s[c] <= '9')
{
printf("%d", s[c] - '0');
}
c++;

}

return (1);
}
