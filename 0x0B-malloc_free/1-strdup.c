#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Returns a pointer to a new string
 *@str: original string
 *Return: Null if fail pointer if success
 */

char *_strdup(char *str)
{
	int a = 0;
	char *p, *dpl;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	p = malloc(sizeof(str) * a + 1);

	if (p == 0)
	{
		return (NULL);
	}
	dpl = p;
	while (*str != '\0')
	{
		*dpl = *str;
		dpl++;
		str++;
	}
	return (p);
}
