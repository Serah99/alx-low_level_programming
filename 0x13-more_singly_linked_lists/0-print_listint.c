#include "lists.h"
#include <stdio.h>

/**
* display_listint - Shows all the elements of a listint_t list.
* @h: A pointer to the start of the list_t list.
*
* Return: The count of nodes in the list_t list.
*/
size_t display_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}

return (count);
}
