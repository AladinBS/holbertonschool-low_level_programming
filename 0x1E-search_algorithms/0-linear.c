#include "search_algos.h"

/**
* linear_search - Function
* @value: value
* Return: The index
* @array: array
* @size: size
*/
int linear_search(int *array, size_t size, int value)
{
int position = 0;
if (array == NULL)
return (-1);
/*
* Size
*/
while (position < (int)size)
{
printf("Value checked array[%d] = [%d]\n", position, array[position]);
if (array[position] == value)
return (position);
position++;
}
return (-1);
}
