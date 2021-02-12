#include "holberton.h"

/**
 *print_last_digit - Prints last digit of any number
 *
 *@r: modulo
 *
 *Return: Last digit of r
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);

}
