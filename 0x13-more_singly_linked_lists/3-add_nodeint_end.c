#include "lists.h"
/**
 *add_nodeint_end - Function to add a node at the end of the linked list
 *@head:pointer to head node
 *@n: data of structure, in this case an integer
 *Return: The address of the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = NULL;
	listint_t *iterator = NULL;

	iterator = *head;
	last = malloc(sizeof(listint_t));
	if (last == NULL)/*all this is to define the parameters*/
		return (NULL);/*of the node to add*/
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;/*here we're conditioning head*/
		return (last);/*so if it's NULL, we'll  return last*/
	}
	while (iterator->next != NULL)
	{
		iterator = iterator->next;/*this is to go through all the list increasing*/
	}								/*positions until we find NULL*/
	iterator->next = last; /*here we change the pointer to last address*/
	return (iterator);
}
