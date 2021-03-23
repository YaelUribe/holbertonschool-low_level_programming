#include "lists.h"
/**
 *print_list - function to print all elements of list_t
 *@h: pointer to data
 *
 *Return: the size of the list, number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;/* helps to determine the number of nodes*/

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
			i++;
		}
		else
		{
			printf("[0] (nil)\n");
			i++;
		}
		h = h->next;/*h points to next node*/
	}
	return (i);
}
