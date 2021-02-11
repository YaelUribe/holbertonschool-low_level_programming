#include "holberton.h"
/**
 *print_alphabet - Printing the alphabet
 *
 *Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
