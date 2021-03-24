#include "lists.h"
/**
 *print_listint - Function to print all the elements of a list.
 *@h: head node
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *aux;
	int i = 0;

	aux = h;
	while (aux)
	{
	printf("%d\n", aux->n);
	i++;
	aux = aux->next;
	}
	return (i);
}
