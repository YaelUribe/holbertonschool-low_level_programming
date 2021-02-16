#include "holberton.h"

/**
 * _isdigit - Prints 1 for digits
 *
 *@c: indicates the ascii to evaluate
 *
 *Return: (1) digits, (0) anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
