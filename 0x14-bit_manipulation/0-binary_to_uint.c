#include "holberton.h"
/**
 *binary_to_uint - function to  convert binary to uint
 *@b: String of ints to convert
 *@c: integer to verify given string
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converter = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		converter <<= 1;
		converter += b[i] - '0';
		i++;
	}
	return (converter);
}