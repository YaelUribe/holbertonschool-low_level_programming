#include "lists.h"
/**
 *add_node - function to add a new node at the beginning of a list
 *@head:first node
 *@str:string to copy
 *Return: The addres of the new element / NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo = NULL;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->str = strdup(str);
	nuevo->len = _strln(str);
	nuevo->next = *head;
	*head = nuevo;

	return (*head);
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
