#include "lists.h"
/**
* dlistint_len - function to determine ammount of elements in a list
* @h: Pointer to the first element of the list
* Return: The number of elements ot he list
*/
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t i;
	const dlistint_t *copy = NULL;

	copy = h;
	for (i = 0; copy != NULL; i++)
	{
		copy = copy->next;
	}
	return (i);
}
