#include "lists.h"

/**
* add_nodeint_front - adds a new node at the start of a linked list
* @top: pointer to the first node in the list
* @val: data to be placed in the new node
*
* Return: pointer to the new node, or NULL if operation doesn't succeed
*/
listint_t *add_nodeint_front(listint_t **top, const int val)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = val;
new_node->next = *top;
*top = new_node;

return (new_node);
}
