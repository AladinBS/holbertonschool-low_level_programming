#include "lists.h"
/**
* print_dlistint - prints all the elements of a
* dlistint_t list
* @h: head of the list
* Return: the number of nodes
* Aladin Bensassi
*/
size_t print_dlistint(const dlistint_t *h)
{
int x;
x = 0;
if (h == NULL)
return (x);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}
