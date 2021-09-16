#include "lists.h"
/**
 *print_dlistint - Function to print data of each node
 *@h: pointer to the first node of a list
 *Return: prints the data stored and the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *copy =  NULL;
	size_t counter = 0;

	copy = h;
	while (copy)
	{
		counter++;
		printf("%d\n", copy->n);
		copy = copy->next;
	}
	return (counter);
}
