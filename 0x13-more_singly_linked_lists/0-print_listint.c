#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list
 * @list: Pointer to the beginning of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *list)
{
	size_t node_count = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		node_count++;
	}

return (node_count);
}
