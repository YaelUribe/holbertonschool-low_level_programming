#include "holberton.h"
#include <stdio.h>
/**
 *print_numbers - printing numbers from 0 to 9
 *
 *@x: number to evaluate
 *
 *Return: always (0)
 */
void print_numbers(void)
{
	int c;

	for (c = 0, c <= 9, c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
