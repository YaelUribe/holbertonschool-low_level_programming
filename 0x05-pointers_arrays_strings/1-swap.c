#include "holberton.h"
/**
 *swap_int - swaps numbers
 *@a: 98
 *@b: 42
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int R;

	R = *a;
	*a = *b;
	*b = R;
}
