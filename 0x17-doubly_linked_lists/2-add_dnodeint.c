#include"lists.h"
/**
 * add_dnodeint - function to add a new node at the beginning of a list.
 * @head:Pointer to  1st node in a list or to NULL.
 * @n:Value to store as data.
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new =  NULL, *first = NULL;

	if (*head == NULL)
	{
		first = malloc(sizeof(dlistint_t));
		if (first == NULL)
			return (NULL);
		first->n = n;
		first->next = NULL;
		first->prev = NULL;
		*head = first;
		return (first);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		(*head)->prev = new;
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
}
