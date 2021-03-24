#include "lists.h"
/**
 *free_listint2 - functiont to Free the list
 *@head: Head node
 *Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t copy;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		copy = *head;
		*head = (*head)->next;
		free(copy);
	}
	copy = NULL;
}
