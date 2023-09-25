#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *newNode;
	listint_t *currentNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (counter = 0; currentNode && counter < idx; counter++)
	{
		if (counter == idx - 1)
		{
			newNode->next = currentNode->next;
			currentNode->next = newNode;
			return (newNode);
		}
		else
			currentNode = currentNode->next;
}

return (NULL);
}
