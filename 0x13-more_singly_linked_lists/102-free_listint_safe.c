#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Safely frees a listint_t list that might have a loop.
* @h: A double pointer to the start of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *fast_ptr, *slow_ptr, *tmp;
size_t nodes = 0;

if (!h || !*h)
return (0);

slow_ptr = *h;
fast_ptr = (*h)->next;

while (fast_ptr && fast_ptr->next)
{
if (slow_ptr == fast_ptr)
{
// We found a loop
nodes = 1;
slow_ptr = slow_ptr->next;
while (slow_ptr != fast_ptr)
{
slow_ptr = slow_ptr->next;
nodes++;
}
slow_ptr = *h;
while (nodes--)
{
tmp = slow_ptr;
slow_ptr = slow_ptr->next;
free(tmp);
}
*h = NULL;
return (nodes);
}
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next->next;
}

slow_ptr = *h;
while (slow_ptr)
{
tmp = slow_ptr;
slow_ptr = slow_ptr->next;
free(tmp);
nodes++;
}
*h = NULL;
return (nodes);
}
