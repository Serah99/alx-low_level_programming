#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode = *head;
	listint_t *nodeToDelete = NULL;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prevNode);
		return (1);
	}

	while (counter < index - 1)
	{
		if (!prevNode || !(prevNode->next))
			return (-1);
		prevNode = prevNode->next;
		counter++;
	}

	nodeToDelete = prevNode->next;
	prevNode->next = nodeToDelete->next;
free(nodeToDelete);

return (1);
}
