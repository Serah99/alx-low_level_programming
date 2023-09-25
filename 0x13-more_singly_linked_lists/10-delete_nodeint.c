#include "lists.h"

/**
* remove_nodeint_at_position - Deletes the node at a specified
*                              position of a listint_t list.
* @head: A pointer to the address of the
*        start of the listint_t list.
* @position: The position of the node to be deleted - indices begin at 0.
*
* Return: On success - 1.
*         On failure - -1.
*/
int remove_nodeint_at_position(listint_t **head, unsigned int position)
{
listint_t *temp_node, *current = *head;
unsigned int counter;

if (current == NULL)
return (-1);

if (position == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

for (counter = 0; counter < (position - 1); counter++)
{
if (current->next == NULL)
return (-1);

current = current->next;
}

temp_node = current->next;
current->next = temp_node->next;
free(temp_node);
return (1);
}
