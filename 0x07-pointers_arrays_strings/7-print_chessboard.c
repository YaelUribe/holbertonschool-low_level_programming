#include "holberton.h"
/**
 *print_chessboard - Prints a chessboard
 *@a: 2d array
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int t, y;

	for (t = 0; t < 8; t++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[t][y]);
		}
		_putchar('\n');
	}
}
