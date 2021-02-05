#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char alpha2;

	for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
	{
		putchar(alpha2);
	}
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
	{
		putchar(alpha2)
	}
	putchar('\n');
	return (0);
}
