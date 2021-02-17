#include "holberton.h"
/**
 *print_line - prints lines.
 *@n: number of times to Print "_"
 *Return: void
 */
void print_line(int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
