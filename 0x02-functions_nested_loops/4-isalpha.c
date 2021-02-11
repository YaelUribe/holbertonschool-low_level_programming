#include "holberton.h"

/**
 * _isalpha - checks Lowercase and uppercase
 *@c: checks lowercase an uppercase
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
