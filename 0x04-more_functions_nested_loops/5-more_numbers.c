#include "holberton.h"
/**
 *more_numbers - Prints more numbers
 *
 *Return: void
 *
 */
void more_numbers(void)
{
	int x;
	int y;
	int k;
	int l;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			k = y;
			if (y > 9)
			{
				k = y / 10;
				l = y % 10;
			}
			_putchar(k + 48);
			if (y > 9)
			{
				_putchar(l + '0');
			}
		}
		_putchar('\n');
	}
}
