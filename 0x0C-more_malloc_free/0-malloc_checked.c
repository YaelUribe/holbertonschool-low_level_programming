#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function to allocate memory using Malloc
 *@b: variable to check
 * Return: A pointer if succes, 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	unsigned int r, t;
	int *v;

	for (r = 0; r <= b; r++)
	{
		;
	}
	v = malloc(sizeof(unsigned int) * r + 1);
	if (v == NULL)
	{
		return ("98");
	}
	for (t = 0; t <= b; t++)
	{
		;
	}
	return (v);
}
