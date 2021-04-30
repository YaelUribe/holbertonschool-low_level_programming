#include "lists.h"
/**
 *print_dlistint - Function to print data of each node
 *@h: pointer to the first node of a list
 *Return: prints the data stored and the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t i;
	const dlistint_t *copy = NULL;

	copy = h;
	for (i = 0; copy != NULL; i++)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
	}
	return (i);
}
