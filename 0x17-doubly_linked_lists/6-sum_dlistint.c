#include "lists.h"
/**
 *sum_dlistint - function to sum all data stored in a list
 *@head: Pointer to the 1st element in a list
 *Return: the sum of all data stored in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head->next != NULL)
	{
		head = head->next;
		i += head->n;
	}
	return (i);
}
