#include"lists.h"
/**
 * add_dnodeint - function to add a new node at the beginning of a list.
 * @head:Pointer to  1st node in a list or to NULL.
 * @n:Value to store as data.
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nu_node = NULL;

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
		(*head)->prev = nu_node;
		nu_node->n = n;
		nu_node->next = *head;
		nu_node->prev = NULL;
		*head = nu_node;
		return (nu_node);
	}
}
