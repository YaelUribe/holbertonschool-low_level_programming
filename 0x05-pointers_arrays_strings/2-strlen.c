#include "holberton.h"
/**
 *_strlen - prints the length of a string
 *
 *@s: pointer so "holberton!".
 *Return: void
 */
int _strlen(char *s)
{
	int h = 0;

	while (*(s + h) != '\0')
	{
		h++;
	}
	return (h);
}
