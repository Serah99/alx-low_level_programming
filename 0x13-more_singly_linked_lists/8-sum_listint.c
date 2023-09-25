#include "lists.h"

/**
* sum_listint - Calculates the sum of all the
*               data values of a listint_t list.
* @head: A pointer to the start of the listint_t list.
*
* Return: If the list is empty - 0.
*         Otherwise - the sum of all the data values.
*/
int sum_listint(listint_t *head)
{
int total = 0;

while (head)
{
total += head->n;
head = head->next;
}

return (total);
}
