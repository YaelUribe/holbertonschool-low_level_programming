#include "holberton.h"
/**
 *get_bit - function to return  bit value from a given index
 *@n: 
 *@index: 
 *Return: index if success or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(long unsigned int) * 8))
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	return (0);
}