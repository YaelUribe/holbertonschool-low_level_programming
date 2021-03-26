#include "holberton.h"
/**
 *get_bit - function to return  bit value from a given index
 *@n: bit to compare
 *@index: bit given
 *Return: index if success or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	return (0);
}
