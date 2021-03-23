#include "lists.h"
/**
 *list_len - function to print all elements of list_t
 *@h: pointer to data
 *
 *Return: the length of the list, number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;/* helps to determine the number of nodes*/

	while (h)
	{
		if (h->str != NULL)
		{
			i++;
		}
		else
		{
			i++;
		}
		h = h->next;/*h points to next node*/
	}
	return (i);
}
