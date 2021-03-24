#include "lists.h"
/**
 *add_node_end - function to add a new node at the end of a list
 *@head:first node
 *@str:string to copy
 *Return: The addres of the new element / NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = NULL;
	list_t *counter = NULL;

	counter = *head;
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail->str = strdup(str);
	tail->len = _strln(str);
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}
	while (counter->next != NULL)
	{
		counter = counter->next;
	}
	counter->next = tail;
	return (counter);
}
/**
 * _strln - funsction to determine string length
 *@s: pointer to a string
 *Return:length of the string
 */
int _strln(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
