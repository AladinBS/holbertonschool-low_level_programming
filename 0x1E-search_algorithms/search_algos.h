#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - list
 * @index: Index
 * @next: Pointer
 * Description: singly linked list
 * @n: Integer
 */
typedef struct listint_s
{
  int n;
  size_t index;
  struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int mod_binary_search(int *array, int value, int begin, int end);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary(int *array, int value, int begin, int end);

#endif