#include "holberton.h"
/**
 *print_triangle - Prints the size of a triangle
 *@size: the size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
	int a, b, c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		b = size - 1 - a;

		for (c = b; c > 0; c--)
		{
			_putchar(' ');
		}

		for (d = size - b; d > 0; d--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
