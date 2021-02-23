#include "holberton.h"
/**
 *_strspn - prints a number from accept
 *@s: string
 *@accept: substring
 *
 *Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int d = 0;
	unsigned int b = 0;

	for (a = 0; s[a] > ' '; a++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (accept[d] == s[a])
			{
				b += 1;
			}
		}
	}
	return (b);
}
