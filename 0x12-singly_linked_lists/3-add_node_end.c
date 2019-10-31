#include "lists.h"

/**
* add_node_end - adds a new node at the end
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head. // Aladin Bensassi
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *temp;
size_t x;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (x = 0; str[x]; x++)
;

new->len = x;
new->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}

return (*head);
}
