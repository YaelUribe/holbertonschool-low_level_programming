#include "lists.h"
/**
 *print_list - function to print all elements of list_t
 * @list_t: list to print
 * @h: pointer to data
 * Return : the size of the list, [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	int i = 0;

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
		h = h->next;
	}
	return (i);
}