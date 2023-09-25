#include "lists.h"

/**
* listint_len - returns the number of elements in a linked lists
* @list: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *list)
{
size_t count = 0;

while (list)
{
count++;
list = list->next;
}

return (count);
}
