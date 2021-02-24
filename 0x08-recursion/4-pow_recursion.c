#include "holberton.h"
/**
 *_pow_recursion - returns the value of x^y
 *@x: value
 *@y: power for x
 *
 *Return: returns the value of x^y
 */
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
	{
		return (1);
	}
		if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
