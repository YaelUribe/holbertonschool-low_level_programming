#include "holberton.h"
/**
 *_strpbrk - Locates occurence from c in s
 *@s: string
 *@accept: substring
 *
 *Return: pointer from s to accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int r;
	unsigned int g = 0;

	for (r = 0; s[r] > '\0'; r++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (s[r] == accept[g])
			{
				return (s + r);
			}
		}
	}
	return (s + r);
}
