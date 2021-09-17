#include "lists.h"
/**
 * free_dlistint - function to free mallocs
 * @head: position to free
 * Return - void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *eraser = NULL;

	while (head)
	{
		eraser = head;
		head = head->next;
		free(eraser);
	}
}
