#include "lists.h"
/**
* add_node - adds a n node at the beginning
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head. // Aladin Bensassi
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *n;
size_t x;

n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);

n->str = strdup(str);

for (x = 0; str[x]; x++)
;

n->len = x;
n->next = *head;
*head = n;

return (*head);
}
