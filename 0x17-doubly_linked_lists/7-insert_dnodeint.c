#include "lists.h"
/**
* dlistint_len - function to determine ammount of elements in a list
* @h: Pointer to the first element of the list
* Return: The number of elements ot he list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *copy = NULL;

	copy = h;
	for (i = 0; copy != NULL; i++)
	{
		copy = copy->next;
	}
	return (i);
}
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
	unsigned int i, length = 0;

	copy = *h;
	length = dlistint_len(copy);
	nu_node = malloc(sizeof(dlistint_t));
	if (!nu_node)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == length)
		return (add_dnodeint_end(h, n));
	while (i == idx - 1)
	{
		copy = copy->next;
		if (!copy)
			return (NULL);
		i++;
	}
	nu_node->n = n;
	nu_node->next = copy->next;
	copy->next->prev = nu_node;
	copy->next = nu_node;
	nu_node->prev = copy;
	return (nu_node);
}
