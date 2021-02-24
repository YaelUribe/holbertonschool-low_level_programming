#include "holberton.h"
/**
 *factorial - Returns the fatorial of n
 *@n: the given number to evaluate
 *
 *Return: returns a pointer with desired value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
