#include "lists.h"
/**
 * get_dnodeint_at_index - function to return data in an indexed position
 * @head: Pointer to the first elemento of the list
 * @index: position to print
 * Return: Data stored in the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
