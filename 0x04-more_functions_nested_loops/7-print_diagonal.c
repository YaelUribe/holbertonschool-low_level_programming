#include "holberton.h"
/**
 *print_diagonal - Prints backslashes
 *
 *@n: number of times "\" is printed
 *Return: void
 */
void print_diagonal(int n)
{
	int a, h;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (a > 0)
			{
				for (h = 0; h < a; h++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
