#include "holberton.h"
/**
 *csn - defines what is a prime number
 *@a: prime number
 *@n: number to evaluate
 *Return: returns 1 for prime
 */
int csn(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	else if ((n % a) == 0)
	{
		return (0);
	}
	else
	{
		return (csn(n, (a + 1)));
	}
}

/**
 *is_prime_number - evaluates a number
 *@n: given number to evaluate
 *Return: 1 or 0c
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
	{
		return (0);
	}
	return (csn(n, a));
}
