#include "holberton.h"
#include <stdlib.h>
/**
 *strl - length of a string
 *@y: variable
 * Return: Always 0.
 */
int strl(char *y)
{
	int k;

	for (k = 0; y[k] != '\0'; k++)
	{
		;
	}
	return (k);
}
/**
 *string_nconcat - Concatenates two strings
 *@s1: 1st string
 *@s2: 2nd string
 *@n: Bytes given
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, g, h;
	char *z;

	if (s1 == NULL || *s1 == '\0')
		len = 0;
	else
		(len = strl(s1));
	if (s2 == NULL || *s2 == '\0')
		len2 = 0;
	else
		(len2 = strl(s2));
	if (n >= len2)
		n = len2;
	z = malloc(sizeof(char) * (n + len));
	if (z == NULL)
	{
		return (NULL);
	}
	for (g = 0; s1[g] != '\0'; g++)
		z[g] = s1[g];
	for (h = 0; h < n; h++)
		z[g + h] = s2[h];
	z[g + h] = '\0';
	return (z);
}
