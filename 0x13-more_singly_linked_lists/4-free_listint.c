#include "lists.h"
/**
 *free_listint - functiont to Free the list
 *@head: Head node
 *Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *cloner;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		cloner = head;
		head = head->next;
		free(cloner);
	}
}
