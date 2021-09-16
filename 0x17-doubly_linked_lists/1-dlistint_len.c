#include "lists.h"
/**
* dlistint_len - function to determine ammount of elements in a list
* @h: Pointer to the first element of the list
* Return: The number of elements ot he list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *copy;

	if (h == NULL)
		return (count);
	copy = h;
	while (copy)
	{
		count++;
		copy = copy->next;
	}
	return (count);
}
