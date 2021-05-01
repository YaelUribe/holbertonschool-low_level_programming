#include "lists.h"
/**
 * add_dnodeint_end - Function to add a node at the end of a list
 * @head: pinter to the first node
 * @n:data to store
 * Return: a new node at the end of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nu_node = NULL;
	dlistint_t *duplicate = NULL;

	nu_node = malloc(sizeof(dlistint_t));
	if (nu_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		nu_node->n = n;
		nu_node->prev = NULL;
		nu_node->next = *head;
		*head = nu_node;
		return (nu_node);
	}
	else
	{
		duplicate = *head;
		while (duplicate->next != NULL)
			duplicate = duplicate->next;
		duplicate->next = nu_node;
		nu_node->n = n;
		nu_node->prev = duplicate;
		nu_node->next = NULL;
		return (nu_node);
	}
}
