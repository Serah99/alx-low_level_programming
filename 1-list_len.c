#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @list: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *list)
{
size_t nodes_count = 0;

while (list)
{
if (!list->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", list->len, list->str);
        
list = list->next;
nodes_count++;
}

return (nodes_count);
}
