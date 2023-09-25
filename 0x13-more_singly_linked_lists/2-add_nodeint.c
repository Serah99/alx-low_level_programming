#include "lists.h"

/**
* prepend_nodeint - appends a fresh node at the start of a linked list
* @start: pointer to the initial node in the list
* @data: value to be included in the new node
*
* Return: pointer to the newly appended node, or NULL on failure
*/
listint_t *prepend_nodeint(listint_t **start, const int data)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = data;
new_node->next = *start;
*start = new_node;

return (new_node);
}
