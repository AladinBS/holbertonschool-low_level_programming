#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints the opcodes of main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */

int main(int argc, char *argv[])
{
int number_of_bytes;
char *mianf = (char *)&main;
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
number_of_bytes = atoi(argv[1]);
if (number_of_bytes < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < number_of_bytes; i++)
{
printf("%.2hhx", mianf[i]);
if (i <  number_of_bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
