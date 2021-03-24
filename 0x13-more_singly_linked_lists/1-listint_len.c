#include "lists.h"
/**
 *listint_len - function to Know length of a list
 *@h:given instance
 *Return: # of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *total;
	int i = 0;

	total = h;
	while (total)
	{
		i++;
		total = total->next;
	}
	return (i);
}
