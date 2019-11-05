#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index
* of a linked list.
* @head: head of a list.
* @index: index of the list where the node is
* deleted.//Aladin Bensassi
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *prev;
listint_t *next;
prev = *head;
if (index != 0)
{
for (x = 0; x < index - 1 && prev != NULL; x++)
{
prev = prev->next;
}
}
if (prev == NULL || (prev->next == NULL && index != 0))
{
return (-1);
}
next = prev->next;
if (index != 0)
{
prev->next = next->next;
free(next);
}
else
{
free(prev);
*head = next;
}
return (1);
}
