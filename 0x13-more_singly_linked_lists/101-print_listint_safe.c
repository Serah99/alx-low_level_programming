#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to the start of linked list.
 *
 * This function can print lists with a loop.
 * You should go through the list only once.
 * If the function fails, exit the program with status 98.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *start)
{
	listnode_t *node_addrs = NULL; /* stores address of nodes */
	size_t node_count = 0;

	/* while you have not encountered a loop */
	while (!has_node(node_addrs, start))
	{
		/* check if the malloc fails then exit */
		if (!push_nodeptr(&node_addrs, start))
		{
			free_listnode(node_addrs);
			exit(98);
		}
		/* print address of current node and the value of field n */
		printf("[%p] %d\n", (void *)start, start->n);
		/* count the nodes */
		node_count++;
		start = start->next;
	}
	/* if you encounter a loop */
	if (start != NULL)
	/* print where the loop starts */
		printf("-> [%p] %d\n", (void *)start, start->n);
	free_listnode(node_addrs);
	/* return number of nodes */
	return (node_count);
}

/**
 * push_nodeptr - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer to the first node
 * @ptr: the value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listnode_t *push_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *newElem;

	/* create new node */
	newElem = malloc(sizeof(listnode_t));
	/* if malloc fails return NULL */
	if (newElem == NULL)
		return (NULL);
	newElem->ptr = (listint_t *)ptr;
	newElem->next = *head;
	*head = newElem;
	return (newElem);
}

/**
 * free_listnode - frees a free_listnode list
 * @head: pointer to first node of the list
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * has_node - checks whether a given address is in a given list
 * @head: first node in the list
 * @ptr: address
 *
 * Return: 1 if address is in nodes. Otherwise 0
 */
int has_node(listnode_t *head, const listint_t *ptr)
{
	/* if we have no address lists return 1 */
	if (ptr == NULL)
		return (1);
	/* traverse the list */
	while (head != NULL)
	{
		/* if the address is in a given list then return 1 */
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
return (0);
}
