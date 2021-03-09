#include "holberton.h"

/**
 * *_strcat - This function concatenate two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; )
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
