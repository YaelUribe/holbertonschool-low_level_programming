#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory
 * @dest: adress to change
 * @src: pointer to string
 * @n: times to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
