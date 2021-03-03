#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - concatenates all given arguments
 *@ac: counter argument
 *@av: vector argument
 *Return: NULL if fails, a pointer on success
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b, c, d;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= ac; a++)
	{
		;
	}
	for (b = 0; *av[b] < '\0'; b++)
	{
		;
	}
	ptr = malloc(sizeof(int) * (ac));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= 0; c++)
	{
		ptr[c] = c;
	}
	ptr = malloc(sizeof(char) * (b + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (d = 0; *av[d] != '\0'; d++)
	{
		ptr[c + d] = *av[d];
	}
	ptr[c + d] = '\0';
	return (ptr);
}
