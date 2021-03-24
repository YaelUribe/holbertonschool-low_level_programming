#include "lists.h"
/**
 *free_list - function to free a list
 *@head: first element of the list.
 *Return: void!
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		free(temporary->str);
		free(temporary);
		head = head->next;
	}
}
