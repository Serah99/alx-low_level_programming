#include "lists.h"

/**
* insert_nodeint_at_position - Inserts a new node to a listint_t
*                              list at a specified position.
* @head: A pointer to the address of the
*        beginning of the listint_t list.
* @idx: The index in the listint_t list where the new
*       node should be placed - indices begin at 0.
* @n: The integer for the new node to hold.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the newly added node.
*/
listint_t *insert_nodeint_at_position(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int count;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

for (count = 0; count < (idx - 1); count++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
