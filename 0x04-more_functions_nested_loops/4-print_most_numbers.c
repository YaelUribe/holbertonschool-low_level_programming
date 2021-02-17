#include "holberton.h"
/**
 *print_most_numbers - prints with exceptions
 *
 *Return: void
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
		_putchar(x + 48);
		}
	}
	_putchar('\n');
}
