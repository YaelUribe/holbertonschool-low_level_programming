#include "lists.h"
/**
 * add_dnodeint_end - Function to add a node at the end of a list
 * @head: pinter to the first node
 * @n:data to store
 * Return: a new node at the end of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		head->prev = new;
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
}
