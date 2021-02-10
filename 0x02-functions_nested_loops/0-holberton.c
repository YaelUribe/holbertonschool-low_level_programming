#include <stdio.h>
/**
 *main - Entry ponit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{unsingned int x;
	char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (x = 0; x < sizeof(holberton); x++)
	{
		_putchar(holberton[x]);
	}
	_putchar('\n');
	return (0);
}
