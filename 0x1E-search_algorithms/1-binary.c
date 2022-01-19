#include "search_algos.h"
/**
 * binary_search - function to search for a value in a sorted
 * array of integers using Binary Search algorithm
 * @array: Given array
 * @size: Size of Array
 * @value: Value to search for in array
 * Return: index where found value in array, -1 if it fails
 */


int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i = 0, middle = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = left + (right - left / 2);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = i + 1;
	}
	return (-1);
}
