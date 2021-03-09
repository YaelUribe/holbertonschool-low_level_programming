#include <stdio.h>
/**
 *_strcpy - Copies a string
 *@dest: new string
 *@src: string to copy
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
