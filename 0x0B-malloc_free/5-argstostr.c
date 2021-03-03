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
	char *ptr, *strn;
	int a, b, c, d, cntr = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] < '\0'; b++)
		{
			cntr++;
		}
		cntr++;
	}
	ptr = malloc(sizeof(char) * (cntr + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strn = ptr;
	for (c = 0; c < ac; c++)
	{
			for (d = 0; av[c][d] != '\0'; d++)
			{
				*ptr = av[c][d];
				ptr++;
			}
			*ptr = '\n';
			ptr++;
	}
	return (strn);
}
