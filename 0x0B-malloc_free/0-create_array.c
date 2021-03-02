#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - Creating an array of chars
 *@c: variable to examine
 *@size: size of the given string
 *Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int d;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(size * sizeof(char));
	for (d = 0; d <= size; d++)
	{
		t[d] = c;
	}
	return (t);
}
