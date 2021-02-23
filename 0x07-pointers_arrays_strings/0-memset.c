#include "holberton.h"
/**
 *_memset - Fills the first n bytes of memory area pointed to with byte b
 *@n: The number of bytes to be filled
 *@s: a pointer to the memory area to be filled
 *@b: the charachter to fill the memory area with
 *
 *Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
