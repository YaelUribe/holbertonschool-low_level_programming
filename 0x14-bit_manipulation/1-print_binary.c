#include "holberton.h"
/**
 *print_binary - function to print binary representation
 *@n: given integer
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int h;

	for (h = 0 << 31; h < 0; h / 2)
		(n & h) ? printf("1") : printf("0");
}
