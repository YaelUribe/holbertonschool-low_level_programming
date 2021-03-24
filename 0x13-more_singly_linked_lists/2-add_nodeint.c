#include "lists.h"
/**
 *add_nodeint - function to add a new node to the beginning of list
 *@head: pointer to the first node
 *@n:value
 *Return: Adress of new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = NULL;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;

	return (*head);
}
