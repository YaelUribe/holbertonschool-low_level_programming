#include "holberton.h"
/**
 **_strncpy - Copies up to n characters from  src to dest.
 * @dest:  pointer to the destination array where the content is to be copied.
 * @src: This is the string to be copied
 * @n: The number of characters to be copied from source.
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
