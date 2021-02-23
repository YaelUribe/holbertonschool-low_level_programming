#include "holberton.h"
/**
 *_strstr - Prints a strig starting on a string
 *@haystack: main string
 *@needle: substring
 *
 *Return: prints a string starting where matches with anothes s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a;

	unsigned int b = 0;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (0);
}
