#include "lists.h"

/**
* find_listint_loop - Finds the loop contained in
*                     a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: If there is no loop - NULL.
*         Otherwise - the address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_ptr, *fast_ptr;

if (head == NULL || head->next == NULL)
return (NULL);

slow_ptr = head->next;
fast_ptr = (head->next)->next;

while (fast_ptr)
{
if (slow_ptr == fast_ptr)
{
slow_ptr = head;

while (slow_ptr != fast_ptr)
{
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}

return (slow_ptr);
}

slow_ptr = slow_ptr->next;
fast_ptr = (fast_ptr->next)->next;
}

return (NULL);
}
