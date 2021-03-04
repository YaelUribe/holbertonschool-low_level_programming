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
	unsigned int *v;

	v = (void *) malloc(b);
	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
