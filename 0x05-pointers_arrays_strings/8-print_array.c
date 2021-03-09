#include <stdio.h>
#include "holberton.h"

/**
 *print_array - Function to print n elements of an array
 *@a: array
 *@n: number of elements to print
 *Return: Always 0
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		if (d < n - 1)
		{
			printf("%d, ", a[d]);
		}
		else
		{
			printf("%d", a[d]);
		}
	}
	printf("\n");
}
