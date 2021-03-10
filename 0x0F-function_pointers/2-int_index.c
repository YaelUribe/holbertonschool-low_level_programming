#include "function_pointers.h"
/**
 *int_index - function to search an integer
 *@array: array to evaluate
 *@size: size of the array
 *@cmp: pointer to function  to compare values
 *Return: -1 if fails index of integer if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (cmp == NULL || array == NULL)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (w = 0; w < size; w++)
	{
		if ((cmp(array[w])) != 0)
		{
			return (w);
		}
	}
	return (-1);
}
