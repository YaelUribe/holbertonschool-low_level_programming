#include "lists.h"
/**
 *sum_dlistint - function to sum all data stored in a list
 *@head: Pointer to the 1st element in a list
 *Return: the sum of all data stored in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy = NULL;
	int i = 0;

	copy = head;
	if (head == NULL)
		return (0);
	while (copy->next != NULL)
	{
		copy = copy->next;
		i += copy->n;
	}
	return (i);
}
