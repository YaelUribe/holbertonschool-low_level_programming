#include "holberton.h"

/**
 * *_strncat - This function concatenates two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: integer limit
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, q;

	while (dest[d] != '\0')
	{
		d++;
	}
	for (q = 0; q < n; q++, d++)
	{
		if (src[q] == '\0')
		{
			break;
		}
		dest[d] = src[q];
	}
	return (dest);
}
