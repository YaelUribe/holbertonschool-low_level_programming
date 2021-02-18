#include "holberton.h"
/**
 *print_rev - Prints a text sdrawkcab
 *@s: a string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int m = 0, k;

	while (*(s + m) != '\0')
	{
		m++;
	}
	k = m - 1;
	while (k >= 0)
	{
		_putchar(*(s + k));
		k--;
	}
	_putchar(10);
}
