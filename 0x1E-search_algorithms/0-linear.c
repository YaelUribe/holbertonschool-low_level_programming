#include "search_algos.h"

/**
 * linear_search - function to search a value in a giver array
 * using the Linear search algorithm
 * @array: Given array to search for an element into
 * @size: Size of the array
 * @value: value to search for in array
 * Return: index qhere located value, -1 if not success
 */


int linear_search(int *array, size_t size, int value)
{
	 size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
