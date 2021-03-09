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
	int s;

	for (s = 0; a[s] != '\0'; s++)
	{
		a[n] = a[s];
		printf("%d, ", a[n]);
	}
}
