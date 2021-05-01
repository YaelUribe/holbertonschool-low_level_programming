#include "lists.h"
/**
 * get_dnodeint_at_index - function to return data in an indexed position
 * @head: Pointer to the first elemento of the list
 * @index: position to print
 * Return: Data stored in the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy = NULL;
	unsigned int i = 0;

	copy = head;
	if (copy == NULL)
		return (NULL);
	while (copy->next != NULL)
	{
		if (i == index)
			return (copy);
		copy = copy->next;
		i++;
	}
	return (0);
}
