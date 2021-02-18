#include "holberton.h"
/**
 *_puts - Prints a string
 *@str: string with text
 *
 *Return: void
 */
void _puts(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		_putchar(str[u]);
	}
	_putchar('\n');
}
