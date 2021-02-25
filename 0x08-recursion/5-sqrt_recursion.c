#include "holberton.h"
/**
 *sqroot - Function to define what a square root is
 *@n: natural number
 *@a: result of a square root
 *Return: Result of a square root of n
 */
int sqroot(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (sqroot(n, a + 1));
}

/**
 *_sqrt_recursion - A square root by recursion
 *@n: A number to examine
 *Return: result of square root
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 0)
	{
		return (-1);
	}
	n = sqroot(n, a + 1);
	return (n);
}
