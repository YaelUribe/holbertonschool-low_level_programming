#include "function_pointers.h"
/**
 *array_iterator - executes a fn given as a parameter
 *@array: array to evaluate
 *@size: size of the array
 *@action: Pointer to a function
 *Return: Always 0 when success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r = 0;

	if (action == NULL)
	{
		return;
	}
	if  (array == NULL)
	{
		return;
	}
	while (r < size)
	{
		action(array[r]);
		r++;
	}
}
