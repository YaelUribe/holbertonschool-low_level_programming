#include "lists.h"
/**
* dlistint_len - function to determine ammount of elements in a list
* @h: Pointer to the first element of the list
* Return: The number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *copy = NULL;

	copy = h;
	while (copy)
	{
		copy = copy->next;
		i++;
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
	unsigned int i = 0, length = 0;

	copy = *h;
	length = dlistint_len(copy);
	nu_node = malloc(sizeof(dlistint_t));
	if (!nu_node)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == length)
		return (add_dnodeint_end(h, n));
	while (copy->next != NULL)
	{
		if (i == idx - 1)
		{
			nu_node->prev = copy;
			nu_node->next = copy->next;
			nu_node->n = n;
			copy->next = nu_node;
			copy = copy->next->next;
			copy->prev = nu_node;
		}
		copy = copy->next;
		i++;
	}
	return (nu_node);
}
