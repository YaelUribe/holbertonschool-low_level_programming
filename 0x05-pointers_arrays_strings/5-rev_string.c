#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: related to the string to reverse
 *str_ln - taking string lenght to reverse
 *Return: void
 */
void rev_string(char *s)
{
	int l, k;
	char c;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	l--;
	for (k = 0; k < l; k++)
	{
		c = s[l];
		s[l] = s[k];
		s[k] = c;
		l--;
	}
}
