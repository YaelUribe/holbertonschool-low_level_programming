#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: if Return value < 0 then it indicates str1 is less than str2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
