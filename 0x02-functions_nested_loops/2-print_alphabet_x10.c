#include "holberton.h"
/**
 *print_alphabet_x10 - Ten times the alphabet
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a;
	int f;

	for (f = 1; f <= 10; f++)
	{

	for (a = 97; a <= 122; a++)
	{	_putchar(a);
	}
	_putchar('\n');
	}
}
