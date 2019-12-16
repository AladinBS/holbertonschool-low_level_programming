#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
j++;
i++;
}
return (dest);
}
