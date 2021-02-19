#include "holberton.h"
/**
 *puts_half - Prints half of the string
 *@str: String to print
 *
 *Return: void
 */
void puts_half(char *str)
{
	int d = 0;
	int e = 0;
	
	while (*(str + d) != '\0')
		d++;
	if (d % 2 == 0)
	{
		for (e = d / 2; e <= d; e++)
		_putchar(str[e]);
	}
	else
	{
		for (e = d - ((d - 1) / 2);  e <= d; e++)
			_putchar(str[e]);
	}
}
