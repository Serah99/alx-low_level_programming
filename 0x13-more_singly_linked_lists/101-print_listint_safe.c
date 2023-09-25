#include "lists.h"
#include <stdio.h>

size_t find_loop_length(const listint_t *head);
size_t safe_listint_print(const listint_t *head);

/**
* find_loop_length - Determines the number of unique nodes
*                    in a potentially looped listint_t list.
* @head: A pointer to the head of the listint_t to analyze.
*
* Return: If the list is not looped - 0.
*         Otherwise - the number of unique nodes in the list.
*/
size_t find_loop_length(const listint_t *head)
{
const listint_t *slow_ptr, *fast_ptr;
size_t unique_nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

slow_ptr = head->next;
fast_ptr = (head->next)->next;

while (fast_ptr)
{
if (slow_ptr == fast_ptr)
{
slow_ptr = head;
while (slow_ptr != fast_ptr)
{
unique_nodes++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}

slow_ptr = slow_ptr->next;
while (slow_ptr != fast_ptr)
{
unique_nodes++;
slow_ptr = slow_ptr->next;
}

return (unique_nodes);
}

slow_ptr = slow_ptr->next;
fast_ptr = (fast_ptr->next)->next;
}

return (0);
}

/**
* safe_listint_print - Prints a listint_t list in a safe way.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t safe_listint_print(const listint_t *head)
{
size_t node_count, node_idx = 0;

node_count = find_loop_length(head);

if (node_count == 0)
{
for (; head != NULL; node_count++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (node_idx = 0; node_idx < node_count; node_idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (node_count);
}
