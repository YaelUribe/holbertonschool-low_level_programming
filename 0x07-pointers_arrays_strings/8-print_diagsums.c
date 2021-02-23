#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints diagonal additions
 * @a: string
 * @size: size of 2D array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int q, w, sr = 0, sl = 0;

	for (q = 0; q < size; q++)
	{
		sl += (a + q * size)[q];
	}
	for (w = 0; w < size; w++)
	{
		sr += (a + w * size)[--q];
	}
	printf("%d, %d\n", sl, sr);
}
