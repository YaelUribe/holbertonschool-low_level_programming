#include "holberton.h"
/**
 *print_square - Prints the size of a square
 *@size: size of the square
 *
 *Return: void
 */
void print_square(int size)
{
	int c, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
