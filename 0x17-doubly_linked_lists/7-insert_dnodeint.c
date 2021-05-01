#include "lists.h"
/**
 * insert_dnodeint_at_index - Function to insert a new node in a given index
 * @h:Pointer to the first element in a list
 * @idx:Index position to insert new node
 * @n: Data to be stored in new node
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = NULL, *nu_node = NULL;
	unsigned int i;

	nu_node = malloc(sizeof(dlistint_t));
	copy = *h;
	while (copy->next != NULL)
	{
		if (i == idx - 1)
		{
			copy->next = nu_node;
			nu_node->prev = copy;
			i++;
		}
		if (i == idx)
		{
			copy->prev = nu_node;
			nu_node->n = n;
			nu_node->next = copy;
			return (nu_node);
		}
		copy = copy->next;
		i++;
	}
	return (0);
}
