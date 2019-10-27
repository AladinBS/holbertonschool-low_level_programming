#include <stdio.h>
/**
 * main - Entry point
 * hex
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int n;

for (n = 0; n < 10; n++)
putchar(n + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
