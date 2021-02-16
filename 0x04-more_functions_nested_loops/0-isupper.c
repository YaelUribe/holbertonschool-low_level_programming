#include "holberton.h"

/**
 *_isupper - Prints 1 for uppercase letters
 *
 *@c: indicates the ascii to evaluate
 *
 *Return: (1) uppercase, (0) anything else
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
